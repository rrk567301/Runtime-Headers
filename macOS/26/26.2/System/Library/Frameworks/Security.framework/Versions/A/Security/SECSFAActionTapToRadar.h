@class NSString;

@interface SECSFAActionTapToRadar : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAlert;
@property (retain, nonatomic) NSString *alert;
@property (readonly, nonatomic) BOOL hasRadarDescription;
@property (retain, nonatomic) NSString *radarDescription;
@property (readonly, nonatomic) BOOL hasComponentName;
@property (retain, nonatomic) NSString *componentName;
@property (readonly, nonatomic) BOOL hasComponentVersion;
@property (retain, nonatomic) NSString *componentVersion;
@property (readonly, nonatomic) BOOL hasComponentID;
@property (retain, nonatomic) NSString *componentID;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end
