@class INUserContextStore;

@interface INUserContext : NSObject <NSSecureCoding> {
    INUserContextStore *_store;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (long long)_type;

- (id)_init;
- (void).cxx_destruct;
- (void)becomeCurrent;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_becomeCurrentNoHelper;
- (void)_setStore:(id)a0;

@end
