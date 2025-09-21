@class NSString;

@interface AWDCoreRoutineHeroAppSuggestionInstance : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char lat : 1; unsigned char lon : 1; unsigned char installed : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasSuggestionId;
@property (retain, nonatomic) NSString *suggestionId;
@property (readonly, nonatomic) char hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) char hasLat;
@property (nonatomic) int lat;
@property (nonatomic) char hasLon;
@property (nonatomic) int lon;
@property (nonatomic) char hasInstalled;
@property (nonatomic) char installed;

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
