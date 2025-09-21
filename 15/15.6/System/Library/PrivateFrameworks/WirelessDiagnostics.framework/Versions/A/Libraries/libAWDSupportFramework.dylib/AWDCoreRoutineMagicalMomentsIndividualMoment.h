@class NSString;

@interface AWDCoreRoutineMagicalMomentsIndividualMoment : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char expertType : 1; unsigned char modelType : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasModelType;
@property (nonatomic) int modelType;
@property (nonatomic) char hasExpertType;
@property (nonatomic) int expertType;
@property (readonly, nonatomic) char hasSuggestionId;
@property (retain, nonatomic) NSString *suggestionId;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
