@class NSMutableArray, PBUnknownFields;

@interface GEORPFeedbackIdLookupResult : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_feedbackInfos;
}

@property (retain, nonatomic) NSMutableArray *feedbackInfos;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)feedbackInfoType;
+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addFeedbackInfo:(id)a0;
- (void)clearFeedbackInfos;
- (void)clearUnknownFields:(char)a0;
- (id)feedbackInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)feedbackInfosCount;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
