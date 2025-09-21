@class HMDRemoteEventRouterProtoConnectResponse, NSString, HMDRemoteEventRouterProtoEventsMessage, HMDRemoteEventRouterProtoMultiHopFetchEventsResponse, HMDRemoteEventRouterProtoChangeRegistrationsResponse;

@interface HMDRemoteEventRouterProtoServerMessage : PBCodable <NSCopying> {
    struct { unsigned char message : 1; } _has;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasUpdatedEvents;
@property (retain, nonatomic) HMDRemoteEventRouterProtoEventsMessage *updatedEvents;
@property (readonly, nonatomic) char hasConnectResponse;
@property (retain, nonatomic) HMDRemoteEventRouterProtoConnectResponse *connectResponse;
@property (readonly, nonatomic) char hasChangeRegistrationsResponse;
@property (retain, nonatomic) HMDRemoteEventRouterProtoChangeRegistrationsResponse *changeRegistrationsResponse;
@property (readonly, nonatomic) char hasMultiHopFetchEventsResponse;
@property (retain, nonatomic) HMDRemoteEventRouterProtoMultiHopFetchEventsResponse *multiHopFetchEventsResponse;
@property (nonatomic) char hasMessage;
@property (nonatomic) int message;

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
- (int)StringAsMessage:(id)a0;
- (void)clearOneofValuesForMessage;
- (id)messageAsString:(int)a0;

@end
