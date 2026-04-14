@class NSData, ChannelActivityParticipantPayload;

@interface ChannelActivityUpdatePayload : PBCodable <NSCopying> {
    struct { unsigned char updateType : 1; } _has;
}

@property (nonatomic) BOOL hasUpdateType;
@property (nonatomic) int updateType;
@property (readonly, nonatomic) BOOL hasParticipantPayload;
@property (retain, nonatomic) ChannelActivityParticipantPayload *participantPayload;
@property (readonly, nonatomic) BOOL hasPadding;
@property (retain, nonatomic) NSData *padding;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)updateTypeAsString:(int)a0;
- (int)StringAsUpdateType:(id)a0;

@end
