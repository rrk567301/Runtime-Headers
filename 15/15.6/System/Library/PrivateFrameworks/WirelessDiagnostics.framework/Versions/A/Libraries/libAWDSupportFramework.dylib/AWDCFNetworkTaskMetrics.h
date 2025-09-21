@class NSString, NSMutableArray;

@interface AWDCFNetworkTaskMetrics : PBCodable <NSCopying> {
    struct { unsigned char didCompleteWithError : 1; unsigned char error : 1; unsigned char numberOfRedirects : 1; unsigned char numberOfRetries : 1; unsigned char taskResume : 1; unsigned char timestamp : 1; unsigned char underlyingError : 1; unsigned char underlyingErrorDomain : 1; unsigned char schedulingTier : 1; unsigned char taskType : 1; unsigned char isBackground : 1; unsigned char unused : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasActivityUUID;
@property (retain, nonatomic) NSString *activityUUID;
@property (nonatomic) char hasTaskResume;
@property (nonatomic) unsigned long long taskResume;
@property (nonatomic) char hasDidCompleteWithError;
@property (nonatomic) unsigned long long didCompleteWithError;
@property (nonatomic) char hasNumberOfRetries;
@property (nonatomic) unsigned long long numberOfRetries;
@property (nonatomic) char hasNumberOfRedirects;
@property (nonatomic) unsigned long long numberOfRedirects;
@property (nonatomic) char hasError;
@property (nonatomic) long long error;
@property (nonatomic) char hasUnderlyingError;
@property (nonatomic) long long underlyingError;
@property (nonatomic) char hasUnderlyingErrorDomain;
@property (nonatomic) long long underlyingErrorDomain;
@property (nonatomic) char hasTaskType;
@property (nonatomic) int taskType;
@property (nonatomic) char hasIsBackground;
@property (nonatomic) char isBackground;
@property (retain, nonatomic) NSMutableArray *transactionMetrics;
@property (nonatomic) char hasSchedulingTier;
@property (nonatomic) int schedulingTier;
@property (nonatomic) char hasUnused;
@property (nonatomic) char unused;

+ (Class)transactionMetricsType;

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
- (void)addTransactionMetrics:(id)a0;
- (void)clearTransactionMetrics;
- (id)transactionMetricsAtIndex:(unsigned long long)a0;
- (unsigned long long)transactionMetricsCount;
- (int)StringAsTaskType:(id)a0;
- (id)taskTypeAsString:(int)a0;
- (int)StringAsSchedulingTier:(id)a0;
- (id)schedulingTierAsString:(int)a0;

@end
