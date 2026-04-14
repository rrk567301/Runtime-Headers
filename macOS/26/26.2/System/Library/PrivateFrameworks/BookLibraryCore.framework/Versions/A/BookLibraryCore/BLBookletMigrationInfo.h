@interface BLBookletMigrationInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long migrationState;
@property (nonatomic) long long storeID;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithStoreID:(long long)a0 migrationState:(long long)a1;

@end
