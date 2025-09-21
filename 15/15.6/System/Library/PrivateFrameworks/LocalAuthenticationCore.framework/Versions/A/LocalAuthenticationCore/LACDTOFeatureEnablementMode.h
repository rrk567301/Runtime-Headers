@class NSString;

@interface LACDTOFeatureEnablementMode : NSObject <LACDTOFeatureEnablementMode>

@property (readonly, nonatomic) char isEnabled;
@property (readonly, nonatomic) char isGracePeriodEnabled;
@property (readonly, nonatomic) unsigned char rawValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)enabled;
+ (id)disabled;
+ (id)enabledWithGracePeriodUnlimited;
+ (id)enabledWithGracePeriod;

- (char)isEqual:(id)a0;
- (id)initWithIsEnabled:(char)a0 isGracePeriodEnabled:(char)a1 rawValue:(unsigned char)a2;

@end
