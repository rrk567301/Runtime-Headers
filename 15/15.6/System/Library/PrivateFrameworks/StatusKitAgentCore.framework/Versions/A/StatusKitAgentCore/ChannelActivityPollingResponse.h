@class NSData, NSMutableArray;

@interface ChannelActivityPollingResponse : PBCodable <NSCopying> {
    struct { unsigned char serverTimestampSeconds : 1; unsigned char version : 1; unsigned char responseMessageIndex : 1; unsigned char retryIntervalSeconds : 1; unsigned char status : 1; unsigned char totalResponseMessages : 1; } _has;
}

@property (nonatomic) char hasStatus;
@property (nonatomic) int status;
@property (readonly, nonatomic) char hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (nonatomic) char hasServerTimestampSeconds;
@property (nonatomic) unsigned long long serverTimestampSeconds;
@property (nonatomic) char hasVersion;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) NSMutableArray *participantPayloads;
@property (nonatomic) char hasResponseMessageIndex;
@property (nonatomic) unsigned int responseMessageIndex;
@property (nonatomic) char hasTotalResponseMessages;
@property (nonatomic) unsigned int totalResponseMessages;
@property (nonatomic) char hasRetryIntervalSeconds;
@property (nonatomic) unsigned int retryIntervalSeconds;

+ (Class)participantPayloadType;

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
- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (void)addParticipantPayload:(id)a0;
- (void)clearParticipantPayloads;
- (id)participantPayloadAtIndex:(unsigned long long)a0;
- (unsigned long long)participantPayloadsCount;

@end
