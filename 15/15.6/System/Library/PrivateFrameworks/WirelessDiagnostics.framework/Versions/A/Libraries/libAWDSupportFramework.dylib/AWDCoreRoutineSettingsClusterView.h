@class NSString;

@interface AWDCoreRoutineSettingsClusterView : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char clusterCount : 1; unsigned char elsewhereCount : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasSessionId;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) char hasClusterCount;
@property (nonatomic) int clusterCount;
@property (nonatomic) char hasElsewhereCount;
@property (nonatomic) int elsewhereCount;

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
