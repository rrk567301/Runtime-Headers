@interface AWDSafariViewControllerTappedOnToolbarButtonEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char button : 1; unsigned char usedLongTap : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasButton;
@property (nonatomic) int button;
@property (nonatomic) char hasUsedLongTap;
@property (nonatomic) char usedLongTap;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsButton:(id)a0;
- (id)buttonAsString:(int)a0;

@end
