@class ChannelActivityActivationResponse, ChannelActivityDeactivationResponse, ChannelActivityPollingResponse;

@interface SharedChannelActivityResponse : PBCodable <NSCopying> {
    struct { unsigned char response : 1; } _has;
}

@property (readonly, nonatomic) char hasActivationResponse;
@property (retain, nonatomic) ChannelActivityActivationResponse *activationResponse;
@property (readonly, nonatomic) char hasDeactivationResponse;
@property (retain, nonatomic) ChannelActivityDeactivationResponse *deactivationResponse;
@property (readonly, nonatomic) char hasPollingResponse;
@property (retain, nonatomic) ChannelActivityPollingResponse *pollingResponse;
@property (nonatomic) char hasResponse;
@property (nonatomic) int response;

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
- (int)StringAsResponse:(id)a0;
- (void)clearOneofValuesForResponse;
- (id)responseAsString:(int)a0;

@end
