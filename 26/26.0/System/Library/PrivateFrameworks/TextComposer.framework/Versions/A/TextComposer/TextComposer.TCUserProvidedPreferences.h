@interface TextComposer.TCUserProvidedPreferences : NSObject {
    void /* unknown type, empty encoding */ profile;
    void /* unknown type, empty encoding */ modelType;
    void /* unknown type, empty encoding */ rule_based_followups;
}

- (id)init;
- (void).cxx_destruct;
- (void)requestRewritingOfInput:(id)a0 rewritingType:(id)a1 completionHandler:(id /* block */)a2;

@end
