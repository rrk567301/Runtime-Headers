@class CKDistributedSiteIdentifier, NSNumber;

@interface CKVVectorTimestamp : NSObject <NSCopying>

@property (retain, nonatomic) CKDistributedSiteIdentifier *siteIdentfier;
@property (retain, nonatomic) NSNumber *sequence;
@property (nonatomic) unsigned char state;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSiteIdentfier:(id)a0 sequence:(id)a1 state:(unsigned char)a2;

@end
