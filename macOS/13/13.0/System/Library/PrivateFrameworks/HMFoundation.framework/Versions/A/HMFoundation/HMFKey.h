@class NSString, NSData;

@interface HMFKey : HMFObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long size;
@property (readonly, copy) NSString *type;
@property (readonly, copy) NSData *data;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToData:(id)a0;
- (id)shortDescription;
- (id)initWithType:(id)a0 size:(unsigned long long)a1 data:(id)a2;

@end
