@class NSXPCConnection;
@protocol PPSSignpostServiceDelegate;

@interface PPSSignpostServiceConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *connectionToServer;
@property (readonly) id<PPSSignpostServiceDelegate> service;

- (void)invalidate;
- (id)init;
- (void).cxx_destruct;

@end
