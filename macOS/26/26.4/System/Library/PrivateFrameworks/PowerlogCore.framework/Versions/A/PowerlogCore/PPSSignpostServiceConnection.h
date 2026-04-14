@class NSXPCConnection;
@protocol PPSSignpostServiceDelegate;

@interface PPSSignpostServiceConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *connectionToServer;
@property (readonly) id<PPSSignpostServiceDelegate> service;

- (void).cxx_destruct;
- (void)invalidate;
- (id)init;

@end
