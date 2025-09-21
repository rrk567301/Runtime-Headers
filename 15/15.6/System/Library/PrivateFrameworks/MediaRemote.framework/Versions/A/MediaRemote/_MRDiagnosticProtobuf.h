@class NSString;

@interface _MRDiagnosticProtobuf : PBCodable <NSCopying> {
    struct { unsigned char dateGenerated : 1; } _has;
}

@property (nonatomic) char hasDateGenerated;
@property (nonatomic) double dateGenerated;
@property (readonly, nonatomic) char hasDiagnosticInfo;
@property (retain, nonatomic) NSString *diagnosticInfo;

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
