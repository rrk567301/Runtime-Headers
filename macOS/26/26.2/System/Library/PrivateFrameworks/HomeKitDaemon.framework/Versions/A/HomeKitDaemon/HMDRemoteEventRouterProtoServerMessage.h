@class HMDRemoteEventRouterProtoConnectResponse, NSString, HMDRemoteEventRouterProtoEventsMessage, HMDRemoteEventRouterProtoMultiHopFetchEventsResponse, HMDRemoteEventRouterProtoChangeRegistrationsResponse;

@interface HMDRemoteEventRouterProtoServerMessage : PBCodable <NSCopying> {
    struct { unsigned char message : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasUpdatedEvents;
@property (retain, nonatomic) HMDRemoteEventRouterProtoEventsMessage *updatedEvents;
@property (readonly, nonatomic) BOOL hasConnectResponse;
@property (retain, nonatomic) HMDRemoteEventRouterProtoConnectResponse *connectResponse;
@property (readonly, nonatomic) BOOL hasChangeRegistrationsResponse;
@property (retain, nonatomic) HMDRemoteEventRouterProtoChangeRegistrationsResponse *changeRegistrationsResponse;
@property (readonly, nonatomic) BOOL hasMultiHopFetchEventsResponse;
@property (retain, nonatomic) HMDRemoteEventRouterProtoMultiHopFetchEventsResponse *multiHopFetchEventsResponse;
@property (nonatomic) BOOL hasMessage;
@property (nonatomic) int message;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (int)StringAsMessage:(id)a0;
- (void)clearOneofValuesForMessage;
- (id)messageAsString:(int)a0;

@end
