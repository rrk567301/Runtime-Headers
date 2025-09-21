@class NSString;

@interface PPPBExtractedDonationRecord : PBCodable <NSCopying> {
    struct { unsigned char score : 1; unsigned char topicId : 1; unsigned char unixTimestampSec : 1; } _has;
}

@property (readonly, nonatomic) char hasSourceBundleId;
@property (retain, nonatomic) NSString *sourceBundleId;
@property (readonly, nonatomic) char hasAlgorithm;
@property (retain, nonatomic) NSString *algorithm;
@property (nonatomic) char hasScore;
@property (nonatomic) double score;
@property (nonatomic) char hasTopicId;
@property (nonatomic) unsigned long long topicId;
@property (readonly, nonatomic) char hasNamedEntity;
@property (retain, nonatomic) NSString *namedEntity;
@property (nonatomic) char hasUnixTimestampSec;
@property (nonatomic) unsigned long long unixTimestampSec;

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
