@interface IRAirPlaySettings : NSObject

@property (nonatomic) BOOL isAutoRoutingSettingEnabledInternal;
@property (nonatomic) BOOL isRoutePredictionSettingEnabledInternal;

+ (id)shared;

- (id)dumpState;
- (id)init;
- (BOOL)isRoutePredictionSettingEnabled;
- (BOOL)isAutoRoutingSettingEnabled;

@end
