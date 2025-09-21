@class NSString;

@interface AWDCoreRoutineMagicalMomentsIndividualMoment : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char expertType : 1; unsigned char modelType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasModelType;
@property (nonatomic) int modelType;
@property (nonatomic) BOOL hasExpertType;
@property (nonatomic) int expertType;
@property (readonly, nonatomic) BOOL hasSuggestionId;
@property (retain, nonatomic) NSString *suggestionId;

- (void)copyTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
