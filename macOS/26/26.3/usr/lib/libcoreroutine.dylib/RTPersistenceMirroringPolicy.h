@class RTTokenBucket;

@interface RTPersistenceMirroringPolicy : NSObject <NSCopying>

@property (retain, nonatomic) RTTokenBucket *tokenBucket;
@property (readonly, nonatomic) long long qualityOfService;
@property (readonly, nonatomic) BOOL allowsMirroringViaCellular;
@property (readonly, nonatomic) BOOL mirroringOperationAllowed;

- (id)description;
- (id)init;
- (id)initWithQualityOfService:(long long)a0;
- (void).cxx_destruct;
- (double)timeIntervalUntilOperationAllowed;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithQualityOfService:(long long)a0 tokenBucket:(id)a1;
- (id)qualityOfServiceToString:(long long)a0;

@end
