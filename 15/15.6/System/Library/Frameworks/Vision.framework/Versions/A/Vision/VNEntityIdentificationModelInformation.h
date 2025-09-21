@class VNEntityIdentificationModelAlgorithm, NSDate;

@interface VNEntityIdentificationModelInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long version;
@property (readonly, copy) NSDate *lastModificationDate;
@property (readonly, getter=isReadOnly) char readOnly;
@property (readonly, copy) VNEntityIdentificationModelAlgorithm *algorithm;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVersion:(unsigned long long)a0 algorithm:(id)a1 lastModificationDate:(id)a2 readOnly:(char)a3;

@end
