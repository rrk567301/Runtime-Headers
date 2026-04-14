@class NSDictionary;

@interface STExpressIntroductionSettingsDefaultsObjC : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL contentRestrictionsIsEnabled;
@property (retain, nonatomic) NSDictionary *contentRestrictionsValueByKey;
@property (nonatomic) BOOL contentRestrictionsHasStrictPolicy;
@property (nonatomic) BOOL communicationSafetyIsEnabled;
@property (nonatomic) BOOL communicationSafetyHasStrictPolicy;
@property (nonatomic) BOOL screenDistanceIsEnabled;
@property (nonatomic) BOOL screenDistanceHasStrictPolicy;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
