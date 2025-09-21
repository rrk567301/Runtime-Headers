@class NSMutableArray;

@interface HMRemoteEventRouterProtoServerDiagnosticInfo : PBCodable <NSCopying> {
    struct { unsigned char lastConnected : 1; unsigned char version : 1; unsigned char connectionState : 1; unsigned char mode : 1; } _has;
}

@property (nonatomic) char hasVersion;
@property (nonatomic) unsigned long long version;
@property (nonatomic) char hasMode;
@property (nonatomic) int mode;
@property (nonatomic) char hasConnectionState;
@property (nonatomic) int connectionState;
@property (nonatomic) char hasLastConnected;
@property (nonatomic) double lastConnected;
@property (retain, nonatomic) NSMutableArray *connectedClients;

+ (Class)connectedClientsType;

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
- (int)StringAsMode:(id)a0;
- (id)modeAsString:(int)a0;
- (int)StringAsConnectionState:(id)a0;
- (void)addConnectedClients:(id)a0;
- (void)clearConnectedClients;
- (id)connectedClientsAtIndex:(unsigned long long)a0;
- (unsigned long long)connectedClientsCount;
- (id)connectionStateAsString:(int)a0;

@end
