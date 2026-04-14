@class NSDictionary;

@interface PREPredictionExemptTermsDetector : NSObject {
    NSDictionary *_languageToExemptTerms;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)_warmTermsIfNecessary;
- (BOOL)checkForExemptContentInText:(id)a0 languageCode:(id)a1;

@end
