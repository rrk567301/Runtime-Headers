@class NSString;

@interface PPPBMusicDataCollectionRecord : PBCodable <NSCopying> {
    struct { unsigned char quantizedScore : 1; unsigned char secondsFromUnixEpoch : 1; unsigned char algorithm : 1; unsigned char mediaType : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasLabel;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) char hasSecondsFromUnixEpoch;
@property (nonatomic) double secondsFromUnixEpoch;
@property (nonatomic) char hasQuantizedScore;
@property (nonatomic) double quantizedScore;
@property (readonly, nonatomic) char hasSourceBundleId;
@property (retain, nonatomic) NSString *sourceBundleId;
@property (readonly, nonatomic) char hasMediaId;
@property (retain, nonatomic) NSString *mediaId;
@property (nonatomic) char hasMediaType;
@property (nonatomic) int mediaType;
@property (nonatomic) char hasAlgorithm;
@property (nonatomic) int algorithm;

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

@end
