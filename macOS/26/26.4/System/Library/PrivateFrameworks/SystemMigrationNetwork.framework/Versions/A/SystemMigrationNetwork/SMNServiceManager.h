@class NSString;

@interface SMNServiceManager : NSObject {
    struct AuthorizationOpaqueRef { } *_authRef;
    NSString *_label;
    unsigned char _persistent;
    unsigned char _suspended;
}

- (BOOL)resume;
- (BOOL)suspend;
- (id)initWithLabel:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
