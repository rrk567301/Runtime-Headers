@class NSString;

@interface VUIFeatureFlag : NSObject

@property (readonly, nonatomic) NSString *defaultsDomain;
@property (retain, nonatomic) NSString *isEnabledByDefaultKey;
@property (readonly, nonatomic) NSString *featureName;
@property (readonly, nonatomic) NSString *featureDescription;
@property (readonly, nonatomic) NSString *defaultsKey;
@property (readonly, nonatomic) char isAvailableForOS;
@property (readonly, nonatomic) char isEnabledByDefault;
@property (nonatomic) char enabled;

- (void).cxx_destruct;
- (id)initWithFeatureDict:(id)a0;
- (char)_enabledFromDefaults;

@end
