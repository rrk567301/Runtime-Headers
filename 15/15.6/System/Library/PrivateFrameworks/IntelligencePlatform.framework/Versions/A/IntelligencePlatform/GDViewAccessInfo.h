@class NSString;

@interface GDViewAccessInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *tableName;
@property (readonly, nonatomic) char alwaysAvailable;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTableName:(id)a0 alwaysAvailable:(char)a1;

@end
