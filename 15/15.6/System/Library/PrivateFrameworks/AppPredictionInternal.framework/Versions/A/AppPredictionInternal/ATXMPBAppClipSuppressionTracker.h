@class NSString;

@interface ATXMPBAppClipSuppressionTracker : PBCodable <NSCopying> {
    struct { unsigned char suppressionType : 1; } _has;
}

@property (nonatomic) char hasSuppressionType;
@property (nonatomic) int suppressionType;
@property (readonly, nonatomic) char hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) char hasUrlHash;
@property (retain, nonatomic) NSString *urlHash;

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
- (int)StringAsSuppressionType:(id)a0;
- (id)suppressionTypeAsString:(int)a0;

@end
