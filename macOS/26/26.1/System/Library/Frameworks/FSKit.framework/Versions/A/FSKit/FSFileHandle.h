@class NSString;

@interface FSFileHandle : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long value;
@property (readonly, copy, nonatomic) NSString *base64String;

- (unsigned long long)hash;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithValue:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
