@class NSString;

@interface ATXMPBAppClipCaptureRateTracker : PBCodable <NSCopying> {
    struct { unsigned char captureType : 1; } _has;
}

@property (nonatomic) char hasCaptureType;
@property (nonatomic) int captureType;
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
- (int)StringAsCaptureType:(id)a0;
- (id)captureTypeAsString:(int)a0;

@end
