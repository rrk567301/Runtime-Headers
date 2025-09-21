@class NSSet;

@interface ScreenTimeCore.AlwaysAllowed : NSObject <NSSecureCoding> {
    void /* function */ apps;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSSet *apps;
@property (nonatomic, readonly) long long hash;

+ (id)defaultAlwaysAllowed;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)removeWithApps:(id)a0;
- (id)addWithApp:(id)a0;
- (id)addWithApps:(id)a0;
- (id)initWithApps:(id)a0;
- (id)removeWithApp:(id)a0;

@end
