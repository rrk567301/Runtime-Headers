@interface CHSMutableEntitlementCollection : CHSEntitlementCollection

@property (nonatomic) char usesEventService;
@property (nonatomic) char canOpenSystemURLs;
@property (nonatomic) char canKeepAlive;
@property (nonatomic) char invalidatesOnStorefrontChange;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setCanKeepAlive:(char)a0;
- (void)setCanOpenSystemURLs:(char)a0;
- (void)setInvalidatesOnStorefrontChange:(char)a0;
- (void)setUsesEventService:(char)a0;

@end
