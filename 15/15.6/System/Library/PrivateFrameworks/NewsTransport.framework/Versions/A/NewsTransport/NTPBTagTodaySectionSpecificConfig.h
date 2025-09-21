@class NSString;

@interface NTPBTagTodaySectionSpecificConfig : PBCodable <NSCopying> {
    struct { unsigned char cutoffTime : 1; unsigned char headlinesPerFeedFetchCount : 1; unsigned char minimumUpdateInterval : 1; unsigned char fetchingBin : 1; } _has;
}

@property (nonatomic) char hasCutoffTime;
@property (nonatomic) unsigned long long cutoffTime;
@property (nonatomic) char hasHeadlinesPerFeedFetchCount;
@property (nonatomic) unsigned long long headlinesPerFeedFetchCount;
@property (nonatomic) char hasFetchingBin;
@property (nonatomic) int fetchingBin;
@property (readonly, nonatomic) char hasTagID;
@property (retain, nonatomic) NSString *tagID;
@property (nonatomic) char hasMinimumUpdateInterval;
@property (nonatomic) unsigned long long minimumUpdateInterval;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
