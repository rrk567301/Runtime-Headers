@class NSString;

@interface LNConfirmationSystemStyleMontaraEnablement : LNConfirmationSystemStyle {
    void /* function */ bundleIdentifier;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) long long source;
@property (nonatomic, readonly) BOOL isExplicitRequest;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 source:(long long)a1 isExplicitRequest:(BOOL)a2;

@end
