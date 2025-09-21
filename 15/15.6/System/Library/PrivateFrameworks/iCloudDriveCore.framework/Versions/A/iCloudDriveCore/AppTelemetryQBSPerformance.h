@class NSString;

@interface AppTelemetryQBSPerformance : PBCodable <NSCopying> {
    struct { unsigned char recordsFetched : 1; unsigned char recordsFetchedTotalMetadataSize : 1; unsigned char totalTime : 1; unsigned char xattrsFetchedTotalSize : 1; } _has;
}

@property (readonly, nonatomic) char hasOperationType;
@property (retain, nonatomic) NSString *operationType;
@property (nonatomic) char hasTotalTime;
@property (nonatomic) unsigned long long totalTime;
@property (nonatomic) char hasRecordsFetched;
@property (nonatomic) unsigned long long recordsFetched;
@property (nonatomic) char hasRecordsFetchedTotalMetadataSize;
@property (nonatomic) unsigned long long recordsFetchedTotalMetadataSize;
@property (nonatomic) char hasXattrsFetchedTotalSize;
@property (nonatomic) unsigned long long xattrsFetchedTotalSize;

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
