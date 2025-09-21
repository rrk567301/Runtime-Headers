@interface IRAirPlaySettings : NSObject

@property (nonatomic) char isAutoRoutingSettingEnabledInternal;
@property (nonatomic) char isRoutePredictionSettingEnabledInternal;

+ (id)shared;

- (id)init;
- (id)dumpState;
- (char)isRoutePredictionSettingEnabled;
- (char)isAutoRoutingSettingEnabled;

@end
