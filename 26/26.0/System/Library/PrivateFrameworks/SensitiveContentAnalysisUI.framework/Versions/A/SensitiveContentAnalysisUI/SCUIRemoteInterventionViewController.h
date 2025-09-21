@interface SCUIRemoteInterventionViewController : NSViewController {
    void /* unknown type, empty encoding */ controller;
    void /* unknown type, empty encoding */ innerState;
}

+ (id)contextDictionaryFromTypeErasedConfig:(id)a0;
+ (long long)interventionTypeFromTypeErasedConfig:(id)a0;
+ (id)typeErasedConfigWithWorkflow:(long long)a0 contextDictionary:(id)a1 type:(long long)a2 options:(long long)a3;
+ (long long)workflowFromTypeErasedConfig:(id)a0;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFacade:(id)a0 typeErasedConfig:(id)a1;
- (id)initWithFacade:(id)a0 workflow:(long long)a1 type:(long long)a2 contextDictionary:(id)a3;

@end
