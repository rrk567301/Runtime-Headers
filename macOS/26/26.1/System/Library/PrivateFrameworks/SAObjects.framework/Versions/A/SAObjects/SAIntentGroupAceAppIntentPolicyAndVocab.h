@class SAIntentGroupProtobufMessage;

@interface SAIntentGroupAceAppIntentPolicyAndVocab : SADomainObject

@property (retain, nonatomic) SAIntentGroupProtobufMessage *aceAppBundleInfo;

+ (id)aceAppIntentPolicyAndVocabWithDictionary:(id)a0 context:(id)a1;
+ (id)aceAppIntentPolicyAndVocab;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
