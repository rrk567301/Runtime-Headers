@class NSXPCConnection;

@interface CNUIImageRemoteBackgroundColorAnalyzer : NSObject

@property (retain) NSXPCConnection *serviceConnection;

- (void)dealloc;
- (void)_openConnectionIfNeeded;
- (void).cxx_destruct;
- (void)_closeConnection;
- (void)getBackgroundColorOnImageData:(id)a0 bitmapFormat:(id)a1 reply:(id /* block */)a2;

@end
