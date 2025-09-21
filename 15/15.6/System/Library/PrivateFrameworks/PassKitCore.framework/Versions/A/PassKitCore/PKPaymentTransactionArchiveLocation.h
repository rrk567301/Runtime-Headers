@class PKCloudStoreZone;

@interface PKPaymentTransactionArchiveLocation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, getter=isArchived) char archived;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) PKCloudStoreZone *cloudStoreZone;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(unsigned long long)a0 archived:(char)a1 cloudStoreZone:(id)a2;
- (char)isEqualToArchiveLocation:(id)a0;

@end
