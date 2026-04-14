@class NSData, NSString;

@interface ETPHeader : PBCodable <NSCopying> {
    struct { unsigned char sendDate : 1; unsigned char startDelay : 1; unsigned char baseColor : 1; unsigned char messageType : 1; unsigned char supportsPlaybackTimeOffsets : 1; } _has;
}

@property (nonatomic) BOOL hasMessageType;
@property (nonatomic) int messageType;
@property (nonatomic) BOOL hasSendDate;
@property (nonatomic) long long sendDate;
@property (readonly, nonatomic) BOOL hasMessageData;
@property (retain, nonatomic) NSData *messageData;
@property (nonatomic) BOOL hasBaseColor;
@property (nonatomic) unsigned int baseColor;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasSupportsPlaybackTimeOffsets;
@property (nonatomic) BOOL supportsPlaybackTimeOffsets;
@property (nonatomic) BOOL hasStartDelay;
@property (nonatomic) double startDelay;

- (int)StringAsMessageType:(id)a0;
- (id)messageTypeAsString:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
