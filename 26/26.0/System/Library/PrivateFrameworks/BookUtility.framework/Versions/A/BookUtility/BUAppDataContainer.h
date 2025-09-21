@class NSURL;

@interface BUAppDataContainer : NSObject <BUContainerProtocol> {
    struct container_object_s { } *_container;
    struct container_query_s { } *_containerQuery;
}

@property (readonly, nonatomic) NSURL *url;

- (id)initWithBundleID:(id)a0;
- (void)dealloc;
- (void)close;
- (BOOL)_setupWithBundleID:(id)a0;
- (id)consumeSandboxToken;

@end
