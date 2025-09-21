@class NSData, NSString;

@interface NTPBPersonalizationParams : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasUserInterestVector;
@property (retain, nonatomic) NSData *userInterestVector;
@property (readonly, nonatomic) char hasUivModelId;
@property (retain, nonatomic) NSString *uivModelId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
