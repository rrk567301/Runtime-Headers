@interface ICStoreDialogResponseHandlerConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL allowsHandlingNonAuthenticationDialogs;
@property (nonatomic) BOOL shouldRecordLastAuthenticationDialogResponseTime;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
