@class NSString;
@protocol BSServiceConnectionListenerDelegate;

@interface BSServiceConnectionListenerConfiguration : NSObject <BSServiceConnectionListenerConfiguring> {
    NSString *_lock_domain;
    NSString *_lock_service;
    NSString *_lock_instance;
    id<BSServiceConnectionListenerDelegate> _lock_delegate;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_configured;
}

+ (id)configurationWithDomain:(id)a0 service:(id)a1;
+ (id)configurationWithDomain:(id)a0 service:(id)a1 instance:(id)a2;

- (void)setService:(id)a0;
- (void)setDelegate:(id)a0;
- (void)setInstance:(id)a0;
- (void)setDomain:(id)a0;
- (void).cxx_destruct;

@end
