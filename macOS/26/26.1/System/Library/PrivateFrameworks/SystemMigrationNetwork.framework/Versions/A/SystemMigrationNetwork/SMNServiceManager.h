@class NSString;

@interface SMNServiceManager : NSObject {
    struct AuthorizationOpaqueRef { } *_authRef;
    NSString *_label;
    unsigned char _persistent;
    unsigned char _suspended;
}

- (id)initWithLabel:(id)a0;
- (BOOL)resume;
- (BOOL)suspend;
- (void)dealloc;
- (void).cxx_destruct;

@end
