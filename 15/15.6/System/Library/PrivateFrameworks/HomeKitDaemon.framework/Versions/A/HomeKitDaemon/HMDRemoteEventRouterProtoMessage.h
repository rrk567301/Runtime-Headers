@class HMDRemoteEventRouterProtoKeepAliveMessage, NSString, HMDRemoteEventRouterProtoChangeRegistrationsMessage, HMDRemoteEventRouterProtoDisconnectMessage, HMDRemoteEventRouterProtoConnectMessage, HMDRemoteEventRouterProtoFetchEventsMessage;

@interface HMDRemoteEventRouterProtoMessage : PBCodable <NSCopying> {
    struct { unsigned char request : 1; } _has;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasConnect;
@property (retain, nonatomic) HMDRemoteEventRouterProtoConnectMessage *connect;
@property (readonly, nonatomic) char hasChangeRegistrations;
@property (retain, nonatomic) HMDRemoteEventRouterProtoChangeRegistrationsMessage *changeRegistrations;
@property (readonly, nonatomic) char hasKeepAlive;
@property (retain, nonatomic) HMDRemoteEventRouterProtoKeepAliveMessage *keepAlive;
@property (readonly, nonatomic) char hasDisconnect;
@property (retain, nonatomic) HMDRemoteEventRouterProtoDisconnectMessage *disconnect;
@property (readonly, nonatomic) char hasFetchEvents;
@property (retain, nonatomic) HMDRemoteEventRouterProtoFetchEventsMessage *fetchEvents;
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
