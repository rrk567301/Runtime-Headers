@class NSString;

@interface CCDevice : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned char options;
@property (readonly, nonatomic) NSString *identifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isLocal;
- (BOOL)isEqualToDevice:(id)a0;
- (id)initWithIdentifier:(id)a0 options:(unsigned char)a1;

@end
