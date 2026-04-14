@class NSString;

@interface NTPBTagTodaySectionSpecificConfig : PBCodable <NSCopying> {
    struct { unsigned char cutoffTime : 1; unsigned char headlinesPerFeedFetchCount : 1; unsigned char minimumUpdateInterval : 1; unsigned char fetchingBin : 1; unsigned char stabilizeAcrossRefreshes : 1; } _has;
}

@property (nonatomic) BOOL hasCutoffTime;
@property (nonatomic) unsigned long long cutoffTime;
@property (nonatomic) BOOL hasHeadlinesPerFeedFetchCount;
@property (nonatomic) unsigned long long headlinesPerFeedFetchCount;
@property (nonatomic) BOOL hasFetchingBin;
@property (nonatomic) int fetchingBin;
@property (readonly, nonatomic) BOOL hasTagID;
@property (retain, nonatomic) NSString *tagID;
@property (nonatomic) BOOL hasMinimumUpdateInterval;
@property (nonatomic) unsigned long long minimumUpdateInterval;
@property (nonatomic) BOOL hasStabilizeAcrossRefreshes;
@property (nonatomic) BOOL stabilizeAcrossRefreshes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)dealloc;

@end
