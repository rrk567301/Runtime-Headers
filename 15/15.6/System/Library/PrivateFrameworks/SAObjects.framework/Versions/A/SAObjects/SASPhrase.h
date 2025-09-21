@class NSArray, NSString;

@interface SASPhrase : AceObject <SAAceSerializable>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *interpretations;
@property (nonatomic) char lowConfidence;
@property (nonatomic) char speechRepairApplied;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)phrase;
+ (id)phraseWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
