@class HMDRemoteEventRouterProtoConnectResponse, NSString, HMDRemoteEventRouterProtoEventsMessage, HMDRemoteEventRouterProtoChangeRegistrationsResponse;

@interface HMDRemoteEventRouterProtoServerMessage : PBCodable <NSCopying> {
    HMDRemoteEventRouterProtoChangeRegistrationsResponse *_changeRegistrationsResponse;
    HMDRemoteEventRouterProtoConnectResponse *_connectResponse;
    NSString *_identifier;
    int _message;
    HMDRemoteEventRouterProtoEventsMessage *_updatedEvents;
    struct { unsigned char message : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
