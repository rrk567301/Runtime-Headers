@class NSData, NSString;

@interface NTPBPersonalizationParams : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUserInterestVector;
@property (retain, nonatomic) NSData *userInterestVector;
@property (readonly, nonatomic) BOOL hasUivModelId;
@property (retain, nonatomic) NSString *uivModelId;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
