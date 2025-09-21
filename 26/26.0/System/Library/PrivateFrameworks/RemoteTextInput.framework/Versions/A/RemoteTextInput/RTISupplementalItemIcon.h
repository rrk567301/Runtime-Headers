@class NSString, NSData;

@interface RTISupplementalItemIcon : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *dataType;
@property (readonly, nonatomic) NSData *data;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDataType:(id)a0 data:(id)a1;

@end
