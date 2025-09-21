@class NSString;

@interface AWDCoreRoutineLMPRequestedInstance : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char confidence : 1; unsigned char occurrences : 1; unsigned char reason : 1; unsigned char suggested : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasEventId;
@property (retain, nonatomic) NSString *eventId;
@property (nonatomic) char hasSuggested;
@property (nonatomic) char suggested;
@property (nonatomic) char hasConfidence;
@property (nonatomic) int confidence;
@property (nonatomic) char hasOccurrences;
@property (nonatomic) int occurrences;
@property (nonatomic) char hasReason;
@property (nonatomic) int reason;

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
