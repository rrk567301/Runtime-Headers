@class NSString;

@interface AWDCoreRoutineLMPResponseInstance : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char interaction : 1; unsigned char selected : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasEventId;
@property (retain, nonatomic) NSString *eventId;
@property (nonatomic) char hasSelected;
@property (nonatomic) char selected;
@property (nonatomic) char hasInteraction;
@property (nonatomic) int interaction;

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
