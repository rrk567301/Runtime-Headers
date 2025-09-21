@class PKCloudStoreZone;

@interface PKPaymentTransactionArchiveLocation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isArchived) BOOL archived;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) PKCloudStoreZone *cloudStoreZone;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 archived:(BOOL)a1 cloudStoreZone:(id)a2;
- (BOOL)isEqualToArchiveLocation:(id)a0;

@end
