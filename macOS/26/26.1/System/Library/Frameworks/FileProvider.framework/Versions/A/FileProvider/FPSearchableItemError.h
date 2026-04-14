@class NSString;

@interface FPSearchableItemError : PBCodable <NSCopying>

@property (nonatomic) int domain;
@property (nonatomic) long long code;
@property (readonly, nonatomic) BOOL hasCustomDomain;
@property (retain, nonatomic) NSString *customDomain;

+ (id)errorFromString:(id)a0;
+ (id)stringFromError:(id)a0;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)domainAsString:(int)a0;
- (int)StringAsDomain:(id)a0;

@end
