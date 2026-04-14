@interface CARemoteLayerServer : NSObject

@property (readonly) unsigned int serverPort;

+ (id)sharedServer;

- (id)_init;
- (id)init;

@end
