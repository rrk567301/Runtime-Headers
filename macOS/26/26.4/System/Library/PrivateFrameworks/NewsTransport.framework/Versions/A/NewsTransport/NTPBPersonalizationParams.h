@class NSData, NSString;

@interface NTPBPersonalizationParams : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUserInterestVector;
@property (retain, nonatomic) NSData *userInterestVector;
@property (readonly, nonatomic) BOOL hasUivModelId;
@property (retain, nonatomic) NSString *uivModelId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
