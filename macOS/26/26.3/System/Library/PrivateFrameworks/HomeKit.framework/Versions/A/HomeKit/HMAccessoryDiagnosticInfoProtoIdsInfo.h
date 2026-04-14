@class NSString;

@interface HMAccessoryDiagnosticInfoProtoIdsInfo : PBCodable <NSCopying> {
    struct { unsigned char idsState : 1; } _has;
}

@property (nonatomic) BOOL hasIdsState;
@property (nonatomic) int idsState;
@property (readonly, nonatomic) BOOL hasIdsIdentifierString;
@property (retain, nonatomic) NSString *idsIdentifierString;

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
- (int)StringAsIdsState:(id)a0;
- (id)idsStateAsString:(int)a0;

@end
