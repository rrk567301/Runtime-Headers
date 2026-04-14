@interface CHSMutableEntitlementCollection : CHSEntitlementCollection

@property (nonatomic) BOOL usesEventService;
@property (nonatomic) BOOL canOpenSystemURLs;
@property (nonatomic) BOOL canKeepAlive;
@property (nonatomic) BOOL invalidatesOnStorefrontChange;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setCanKeepAlive:(BOOL)a0;
- (void)setCanOpenSystemURLs:(BOOL)a0;
- (void)setInvalidatesOnStorefrontChange:(BOOL)a0;
- (void)setUsesEventService:(BOOL)a0;

@end
