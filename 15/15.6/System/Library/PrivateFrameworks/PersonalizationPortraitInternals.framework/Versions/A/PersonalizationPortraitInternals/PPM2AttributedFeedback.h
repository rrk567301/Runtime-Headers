@class NSString;

@interface PPM2AttributedFeedback : PBCodable <NSCopying> {
    struct { unsigned char algorithm : 1; unsigned char category : 1; unsigned char domain : 1; unsigned char source : 1; unsigned char type : 1; unsigned char isRemote : 1; } _has;
}

@property (nonatomic) char hasSource;
@property (nonatomic) int source;
@property (nonatomic) char hasAlgorithm;
@property (nonatomic) int algorithm;
@property (nonatomic) char hasDomain;
@property (nonatomic) int domain;
@property (readonly, nonatomic) char hasActiveTreatments;
@property (retain, nonatomic) NSString *activeTreatments;
@property (readonly, nonatomic) char hasClientId;
@property (retain, nonatomic) NSString *clientId;
@property (readonly, nonatomic) char hasMappingId;
@property (retain, nonatomic) NSString *mappingId;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (nonatomic) char hasCategory;
@property (nonatomic) int category;
@property (readonly, nonatomic) char hasDynamicCategory;
@property (retain, nonatomic) NSString *dynamicCategory;
@property (nonatomic) char hasIsRemote;
@property (nonatomic) char isRemote;

+ (id)options;

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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (id)sourceAsString:(int)a0;
- (int)StringAsSource:(id)a0;
- (int)StringAsCategory:(id)a0;
- (id)categoryAsString:(int)a0;
- (int)StringAsDomain:(id)a0;
- (id)domainAsString:(int)a0;
- (int)StringAsAlgorithm:(id)a0;
- (id)algorithmAsString:(int)a0;

@end
