@class MTRPluginPBMUUID;

@interface MTRPluginPBMHeader : PBCodable <NSCopying> {
    struct { unsigned char messageDirection : 1; unsigned char messageType : 1; unsigned char protocol : 1; unsigned char schema : 1; unsigned char version : 1; } _has;
}

@property (readonly, nonatomic, getter=isValid) char valid;
@property (nonatomic) char hasVersion;
@property (nonatomic) int version;
@property (nonatomic) char hasSchema;
@property (nonatomic) int schema;
@property (nonatomic) char hasProtocol;
@property (nonatomic) int protocol;
@property (nonatomic) char hasMessageType;
@property (nonatomic) unsigned int messageType;
@property (nonatomic) char hasMessageDirection;
@property (nonatomic) int messageDirection;
@property (readonly, nonatomic) char hasMessageID;
@property (retain, nonatomic) MTRPluginPBMUUID *messageID;
@property (readonly, nonatomic) char hasSessionID;
@property (retain, nonatomic) MTRPluginPBMUUID *sessionID;
@property (readonly, nonatomic) char hasHomeID;
@property (retain, nonatomic) MTRPluginPBMUUID *homeID;

+ (id)messageTypeAsString:(unsigned int)a0;
+ (id)headerWithSessionID:(id)a0 homeID:(id)a1 messageType:(int)a2;
+ (id)onewayHeaderWithSessionID:(id)a0 homeID:(id)a1 messageType:(int)a2;
+ (id)requestHeaderWithSessionID:(id)a0 homeID:(id)a1 messageType:(int)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)shortDescription;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsVersion:(id)a0;
- (id)versionAsString:(int)a0;
- (int)StringAsSchema:(id)a0;
- (int)StringAsMessageDirection:(id)a0;
- (int)StringAsProtocol:(id)a0;
- (id)schemaAsString:(int)a0;
- (id)messageDirectionAsString:(int)a0;
- (id)protocolAsString:(int)a0;
- (id)responseHeaderForRequestHeader;

@end
