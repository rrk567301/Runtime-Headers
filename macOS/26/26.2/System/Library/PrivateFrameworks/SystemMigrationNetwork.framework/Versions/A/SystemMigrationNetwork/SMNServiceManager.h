@class NSString;

@interface SMNServiceManager : NSObject {
    struct AuthorizationOpaqueRef { } *_authRef;
    NSString *_label;
    unsigned char _persistent;
    unsigned char _suspended;
}

- (BOOL)suspend;
- (BOOL)resume;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0;
- (void)dealloc;

@end
