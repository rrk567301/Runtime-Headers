@class NSString;

@interface _BMXPCConnectionCacheKey : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long serviceType;
@property (readonly, nonatomic) unsigned long long domain;
@property (readonly, nonatomic) unsigned int user;
@property (readonly, nonatomic) NSString *useCase;
@property (readonly, nonatomic) unsigned long long flags;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithServiceType:(unsigned long long)a0 domain:(unsigned long long)a1 user:(unsigned int)a2 useCase:(id)a3 flags:(unsigned long long)a4;

@end
