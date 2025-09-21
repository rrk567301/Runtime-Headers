@class NSString, NSMutableArray;

@interface PPM2FeedbackPortraitRegistered : PBCodable <NSCopying> {
    struct { unsigned char domain : 1; unsigned char feedbackDomainStatus : 1; unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) char hasClientId;
@property (retain, nonatomic) NSString *clientId;
@property (nonatomic) char hasDomain;
@property (nonatomic) int domain;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasMappingId;
@property (retain, nonatomic) NSString *mappingId;
@property (retain, nonatomic) NSMutableArray *records;
@property (readonly, nonatomic) char hasActiveTreatments;
@property (retain, nonatomic) NSString *activeTreatments;
@property (nonatomic) char hasFeedbackDomainStatus;
@property (nonatomic) int feedbackDomainStatus;

+ (id)options;
+ (Class)recordsType;

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
- (int)StringAsDomain:(id)a0;
- (id)domainAsString:(int)a0;
- (void)addRecords:(id)a0;
- (id)recordsAtIndex:(unsigned long long)a0;
- (void)clearRecords;
- (unsigned long long)recordsCount;
- (int)StringAsFeedbackDomainStatus:(id)a0;
- (id)feedbackDomainStatusAsString:(int)a0;

@end
