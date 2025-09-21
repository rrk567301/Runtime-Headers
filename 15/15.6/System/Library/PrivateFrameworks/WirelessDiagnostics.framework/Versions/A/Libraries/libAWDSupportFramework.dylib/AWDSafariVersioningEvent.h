@class NSString;

@interface AWDSafariVersioningEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char variant : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasVersion;
@property (retain, nonatomic) NSString *version;
@property (nonatomic) char hasVariant;
@property (nonatomic) int variant;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsVariant:(id)a0;
- (id)variantAsString:(int)a0;

@end
