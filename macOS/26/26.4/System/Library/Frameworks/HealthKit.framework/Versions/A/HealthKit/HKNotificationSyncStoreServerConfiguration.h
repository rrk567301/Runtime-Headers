@class NSString;

@interface HKNotificationSyncStoreServerConfiguration : HKTaskConfiguration

@property (readonly, copy, nonatomic) NSString *clientIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithClientIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
