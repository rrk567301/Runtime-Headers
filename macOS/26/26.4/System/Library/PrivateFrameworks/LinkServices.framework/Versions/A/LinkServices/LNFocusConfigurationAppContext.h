@class NSPredicate, NSString;

@interface LNFocusConfigurationAppContext : LNActionAppContext <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSPredicate *notificationFilterPredicate;
@property (readonly, copy, nonatomic) NSString *targetContentIdentifierPrefix;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithNotificationFilterPredicate:(id)a0 targetContentIdentifierPrefix:(id)a1;

@end
