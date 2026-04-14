@class NSString;

@interface BMPBMicroLocationTruthTagEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; } _has;
}

@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) BOOL hasTruthTagIdentifier;
@property (retain, nonatomic) NSString *truthTagIdentifier;
@property (readonly, nonatomic) BOOL hasRecordingRequestIdentifier;
@property (retain, nonatomic) NSString *recordingRequestIdentifier;
@property (readonly, nonatomic) BOOL hasClientBundleId;
@property (retain, nonatomic) NSString *clientBundleId;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
