@interface NTPBIAdConfig : PBCodable <NSCopying> {
    struct { unsigned char segmentsHistoryWindowInterval : 1; unsigned char segmentsMinimumArticleCount : 1; unsigned char segmentsSubmissionFrequency : 1; unsigned char segmentsThreshold : 1; unsigned char segmentsEnabled : 1; } _has;
}

@property (nonatomic) char hasSegmentsEnabled;
@property (nonatomic) char segmentsEnabled;
@property (nonatomic) char hasSegmentsThreshold;
@property (nonatomic) double segmentsThreshold;
@property (nonatomic) char hasSegmentsSubmissionFrequency;
@property (nonatomic) long long segmentsSubmissionFrequency;
@property (nonatomic) char hasSegmentsHistoryWindowInterval;
@property (nonatomic) long long segmentsHistoryWindowInterval;
@property (nonatomic) char hasSegmentsMinimumArticleCount;
@property (nonatomic) long long segmentsMinimumArticleCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
