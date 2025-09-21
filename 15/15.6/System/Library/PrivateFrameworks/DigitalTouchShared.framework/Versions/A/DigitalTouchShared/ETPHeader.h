@class NSData, NSString;

@interface ETPHeader : PBCodable <NSCopying> {
    struct { unsigned char sendDate : 1; unsigned char startDelay : 1; unsigned char baseColor : 1; unsigned char messageType : 1; unsigned char supportsPlaybackTimeOffsets : 1; } _has;
}

@property (nonatomic) char hasMessageType;
@property (nonatomic) int messageType;
@property (nonatomic) char hasSendDate;
@property (nonatomic) long long sendDate;
@property (readonly, nonatomic) char hasMessageData;
@property (retain, nonatomic) NSData *messageData;
@property (nonatomic) char hasBaseColor;
@property (nonatomic) unsigned int baseColor;
@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) char hasSupportsPlaybackTimeOffsets;
@property (nonatomic) char supportsPlaybackTimeOffsets;
@property (nonatomic) char hasStartDelay;
@property (nonatomic) double startDelay;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsMessageType:(id)a0;
- (id)messageTypeAsString:(int)a0;

@end
