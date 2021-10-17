#include <curl/curl.h>

int main() {
    CURL *curl = curl_easy_init();
    if(curl) {
        curl_easy_setopt(curl, CURLOPT_URL, "https://example.com");

        /* Set the default value: strict certificate check please */
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 1L);

        curl_easy_perform(curl);
    }
}
