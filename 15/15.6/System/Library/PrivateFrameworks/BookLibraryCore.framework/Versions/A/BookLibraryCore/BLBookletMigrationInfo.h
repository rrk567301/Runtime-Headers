@interface BLBookletMigrationInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long migrationState;
@property (nonatomic) long long storeID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStoreID:(long long)a0 migrationState:(long long)a1;

@end
