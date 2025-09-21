@class ChannelActivityPollingRequest, ChannelActivityActivationRequest, ChannelActivityDeactivationRequest;

@interface SharedChannelActivityRequest : PBRequest <NSCopying> {
    struct { unsigned char request : 1; } _has;
}

@property (readonly, nonatomic) char hasActivationRequest;
@property (retain, nonatomic) ChannelActivityActivationRequest *activationRequest;
@property (readonly, nonatomic) char hasDeactivationRequest;
@property (retain, nonatomic) ChannelActivityDeactivationRequest *deactivationRequest;
@property (readonly, nonatomic) char hasPollingRequest;
@property (retain, nonatomic) ChannelActivityPollingRequest *pollingRequest;
@property (nonatomic) char hasRequest;
@property (nonatomic) int request;

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
- (int)StringAsRequest:(id)a0;
- (void)clearOneofValuesForRequest;
- (id)requestAsString:(int)a0;

@end
