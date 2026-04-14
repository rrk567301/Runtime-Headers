@class NSString;

@interface FSFileHandle : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long value;
@property (readonly, copy, nonatomic) NSString *base64String;

- (id)initWithValue:(unsigned long long)a0;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
