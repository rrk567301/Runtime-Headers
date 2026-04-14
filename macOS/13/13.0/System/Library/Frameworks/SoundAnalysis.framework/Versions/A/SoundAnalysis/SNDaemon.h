@class SNFileServer;

@interface SNDaemon : NSObject {
    SNFileServer *_fileServer;
}

- (id)init;
- (void)run;
- (void).cxx_destruct;

@end
