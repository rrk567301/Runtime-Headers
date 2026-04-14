@class ATXUniversalBlendingLayerServer;

@interface ATXMacOSBlendingLayerServer : NSObject

@property (readonly, nonatomic) ATXUniversalBlendingLayerServer *blendingLayerServer;

+ (id)sharedInstance;
+ (id)layoutSelectorsForConsumerSubTypes;

- (void).cxx_destruct;
- (void)start;
- (id)init;

@end
