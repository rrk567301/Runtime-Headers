@class ATXUniversalBlendingLayerServer;

@interface ATXMacOSBlendingLayerServer : NSObject

@property (readonly, nonatomic) ATXUniversalBlendingLayerServer *blendingLayerServer;

+ (id)sharedInstance;
+ (id)layoutSelectorsForConsumerSubTypes;

- (void)start;
- (void).cxx_destruct;
- (id)init;

@end
