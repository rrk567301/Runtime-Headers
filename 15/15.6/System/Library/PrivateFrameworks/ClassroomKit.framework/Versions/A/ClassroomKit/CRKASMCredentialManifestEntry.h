@class NSString, NSDateInterval;

@interface CRKASMCredentialManifestEntry : NSObject <CRKDictionaryFormatable>

@property (readonly, copy, nonatomic) NSString *userIdentifier;
@property (readonly, nonatomic) NSDateInterval *validityInterval;
@property (readonly, copy, nonatomic) NSString *fingerprint;
@property (readonly, nonatomic, getter=isFullyPopulated) char fullyPopulated;
@property (readonly, copy, nonatomic) NSString *stringValue;

+ (id)validityIntervalWithDictionary:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryValue;
- (id)initWithUserIdentifier:(id)a0 validityInterval:(id)a1 fingerprint:(id)a2;

@end
