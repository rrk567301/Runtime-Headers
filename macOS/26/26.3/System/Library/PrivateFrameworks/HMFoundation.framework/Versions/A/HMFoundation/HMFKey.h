@class NSString, NSData;

@interface HMFKey : HMFObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long size;
@property (readonly, copy) NSString *type;
@property (readonly, copy) NSData *data;

- (id)shortDescription;
- (id)init;
- (BOOL)isEqualToData:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(id)a0 size:(unsigned long long)a1 data:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
