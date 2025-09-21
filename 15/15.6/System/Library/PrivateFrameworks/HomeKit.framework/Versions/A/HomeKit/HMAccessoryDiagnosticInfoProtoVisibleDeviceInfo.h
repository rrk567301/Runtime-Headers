@class NSString;

@interface HMAccessoryDiagnosticInfoProtoVisibleDeviceInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasIdsIdentifierString;
@property (retain, nonatomic) NSString *idsIdentifierString;
@property (readonly, nonatomic) char hasMediaRouteIdString;
@property (retain, nonatomic) NSString *mediaRouteIdString;

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
