@class NSString;

@interface _BMXPCConnectionCacheKey : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long serviceType;
@property (readonly, nonatomic) unsigned long long domain;
@property (readonly, nonatomic) unsigned int user;
@property (readonly, nonatomic) NSString *useCase;
@property (readonly, nonatomic) unsigned long long flags;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithServiceType:(unsigned long long)a0 domain:(unsigned long long)a1 user:(unsigned int)a2 useCase:(id)a3 flags:(unsigned long long)a4;

@end
