@class NSString;

@interface NTPBComscoreEventSend : PBCodable <NSCopying> {
    struct { unsigned char comscoreEventType : 1; unsigned char resultType : 1; } _has;
}

@property (nonatomic) char hasComscoreEventType;
@property (nonatomic) int comscoreEventType;
@property (nonatomic) char hasResultType;
@property (nonatomic) int resultType;
@property (readonly, nonatomic) char hasEventUdid;
@property (retain, nonatomic) NSString *eventUdid;
@property (readonly, nonatomic) char hasFailureReasonCode;
@property (retain, nonatomic) NSString *failureReasonCode;
@property (readonly, nonatomic) char hasContentViewedId;
@property (retain, nonatomic) NSString *contentViewedId;
@property (readonly, nonatomic) char hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
