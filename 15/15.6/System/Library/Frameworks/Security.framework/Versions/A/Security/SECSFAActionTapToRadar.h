@class NSString;

@interface SECSFAActionTapToRadar : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasAlert;
@property (retain, nonatomic) NSString *alert;
@property (readonly, nonatomic) char hasRadarDescription;
@property (retain, nonatomic) NSString *radarDescription;
@property (readonly, nonatomic) char hasComponentName;
@property (retain, nonatomic) NSString *componentName;
@property (readonly, nonatomic) char hasComponentVersion;
@property (retain, nonatomic) NSString *componentVersion;
@property (readonly, nonatomic) char hasComponentID;
@property (retain, nonatomic) NSString *componentID;

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
