@class NSString;

@interface HMAccessoryDiagnosticInfoProtoVisibleDeviceInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIdsIdentifierString;
@property (retain, nonatomic) NSString *idsIdentifierString;
@property (readonly, nonatomic) BOOL hasMediaRouteIdString;
@property (retain, nonatomic) NSString *mediaRouteIdString;

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
