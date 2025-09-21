@class NSString, PIRStructuredAddress, PIRPoint;

@interface PIRGeoPoi : PBCodable <NSCopying> {
    struct { unsigned char popularityCartoScore : 1; unsigned char zioId : 1; } _has;
}

@property (readonly, nonatomic) char hasApolloId;
@property (retain, nonatomic) NSString *apolloId;
@property (readonly, nonatomic) char hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) char hasPrefGeocode;
@property (retain, nonatomic) PIRPoint *prefGeocode;
@property (readonly, nonatomic) char hasAddress;
@property (retain, nonatomic) PIRStructuredAddress *address;
@property (nonatomic) char hasZioId;
@property (nonatomic) unsigned long long zioId;
@property (nonatomic) char hasPopularityCartoScore;
@property (nonatomic) double popularityCartoScore;
@property (readonly, nonatomic) char hasModernPrimaryCategoryId;
@property (retain, nonatomic) NSString *modernPrimaryCategoryId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
