@class NSString;

@interface ASDTIOServiceID : NSObject <NSCopying>

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned int clientType;

+ (id)forIdentifier:(id)a0 andClientType:(unsigned int)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initForIdentifier:(id)a0 andClientType:(unsigned int)a1;

@end
