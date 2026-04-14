@class NSString, NSData;

@interface MutableDecryptedParticipantPayload : PBCodable <NSCopying> {
    struct { unsigned char protocolVersion : 1; unsigned char timestamp : 1; unsigned char compressionType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTokenUri;
@property (retain, nonatomic) NSString *tokenUri;
@property (readonly, nonatomic) BOOL hasPresenceIdentifier;
@property (retain, nonatomic) NSString *presenceIdentifier;
@property (readonly, nonatomic) BOOL hasChannelIdentifier;
@property (retain, nonatomic) NSString *channelIdentifier;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasClientPayloadsBytes;
@property (retain, nonatomic) NSData *clientPayloadsBytes;
@property (nonatomic) BOOL hasCompressionType;
@property (nonatomic) int compressionType;
@property (nonatomic) BOOL hasProtocolVersion;
@property (nonatomic) long long protocolVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (int)StringAsCompressionType:(id)a0;
- (id)compressionTypeAsString:(int)a0;

@end
