@class NSString;

@interface WFPBRemoteWidgetConfigurationEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL hasBundleIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BOOL hasWidgetIdentifier;
@property (retain, nonatomic) NSString *widgetIdentifier;
@property (readonly, nonatomic) BOOL hasSizeClass;
@property (retain, nonatomic) NSString *sizeClass;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
