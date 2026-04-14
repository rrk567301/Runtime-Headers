@class NSString;

@interface _MRDiagnosticProtobuf : PBCodable <NSCopying> {
    struct { unsigned char dateGenerated : 1; } _has;
}

@property (nonatomic) BOOL hasDateGenerated;
@property (nonatomic) double dateGenerated;
@property (readonly, nonatomic) BOOL hasDiagnosticInfo;
@property (retain, nonatomic) NSString *diagnosticInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
