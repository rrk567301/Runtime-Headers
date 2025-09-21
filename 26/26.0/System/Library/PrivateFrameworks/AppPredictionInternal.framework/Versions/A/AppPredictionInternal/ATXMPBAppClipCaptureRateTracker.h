@class NSString;

@interface ATXMPBAppClipCaptureRateTracker : PBCodable <NSCopying> {
    struct { unsigned char captureType : 1; } _has;
}

@property (nonatomic) BOOL hasCaptureType;
@property (nonatomic) int captureType;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) BOOL hasUrlHash;
@property (retain, nonatomic) NSString *urlHash;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (int)StringAsCaptureType:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)captureTypeAsString:(int)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
