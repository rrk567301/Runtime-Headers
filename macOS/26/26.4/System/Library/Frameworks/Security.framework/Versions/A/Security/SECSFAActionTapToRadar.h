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
