@class NSString;

@interface GDViewAccessInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *tableName;
@property (readonly, nonatomic) BOOL alwaysAvailable;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTableName:(id)a0 alwaysAvailable:(BOOL)a1;

@end
