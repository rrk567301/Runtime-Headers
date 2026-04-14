@class ATXUniversalBlendingLayerServer;

@interface ATXMacOSBlendingLayerServer : NSObject

@property (readonly, nonatomic) ATXUniversalBlendingLayerServer *blendingLayerServer;

+ (id)sharedInstance;
+ (id)layoutSelectorsForConsumerSubTypes;

- (void)start;
- (id)init;
- (void).cxx_destruct;

@end
