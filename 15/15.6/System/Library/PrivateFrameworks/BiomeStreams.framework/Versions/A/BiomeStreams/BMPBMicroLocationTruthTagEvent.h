@class NSString;

@interface BMPBMicroLocationTruthTagEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; } _has;
}

@property (nonatomic) char hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) char hasTruthTagIdentifier;
@property (retain, nonatomic) NSString *truthTagIdentifier;
@property (readonly, nonatomic) char hasRecordingRequestIdentifier;
@property (retain, nonatomic) NSString *recordingRequestIdentifier;
@property (readonly, nonatomic) char hasClientBundleId;
@property (retain, nonatomic) NSString *clientBundleId;

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

@end
