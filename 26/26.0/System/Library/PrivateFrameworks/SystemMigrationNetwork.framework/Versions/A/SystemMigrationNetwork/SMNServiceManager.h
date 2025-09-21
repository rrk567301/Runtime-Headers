@class NSString;

@interface SMNServiceManager : NSObject {
    struct AuthorizationOpaqueRef { } *_authRef;
    NSString *_label;
    unsigned char _persistent;
    unsigned char _suspended;
}

- (void)dealloc;
- (id)initWithLabel:(id)a0;
- (BOOL)suspend;
- (BOOL)resume;
- (void).cxx_destruct;

@end
