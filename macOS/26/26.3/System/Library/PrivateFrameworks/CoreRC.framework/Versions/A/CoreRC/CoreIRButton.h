@interface CoreIRButton : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int usagePage;
@property (readonly, nonatomic) unsigned int usageID;

- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithUsagePage:(unsigned int)a0 usageID:(unsigned int)a1;

@end
