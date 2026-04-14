@class NSXPCConnection;
@protocol PPSSignpostServiceDelegate;

@interface PPSSignpostServiceConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *connectionToServer;
@property (readonly) id<PPSSignpostServiceDelegate> service;

- (void)invalidate;
- (void).cxx_destruct;
- (id)init;

@end
