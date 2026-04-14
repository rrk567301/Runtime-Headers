@class NSData;

@interface ETPVideo : PBCodable <NSCopying> {
    struct { unsigned char mediaType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIntroMessageData;
@property (retain, nonatomic) NSData *introMessageData;
@property (readonly, nonatomic) BOOL hasPlayingMessagesData;
@property (retain, nonatomic) NSData *playingMessagesData;
@property (nonatomic) BOOL hasMediaType;
@property (nonatomic) int mediaType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (int)StringAsMediaType:(id)a0;
- (id)mediaTypeAsString:(int)a0;

@end
