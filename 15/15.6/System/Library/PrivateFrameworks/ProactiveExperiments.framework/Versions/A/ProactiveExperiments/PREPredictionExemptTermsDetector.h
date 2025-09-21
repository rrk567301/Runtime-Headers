@class NSDictionary;

@interface PREPredictionExemptTermsDetector : NSObject {
    NSDictionary *_languageToExemptTerms;
}

- (id)init;
- (void).cxx_destruct;
- (char)_warmTermsIfNecessary;
- (char)checkForExemptContentInText:(id)a0 languageCode:(id)a1;

@end
