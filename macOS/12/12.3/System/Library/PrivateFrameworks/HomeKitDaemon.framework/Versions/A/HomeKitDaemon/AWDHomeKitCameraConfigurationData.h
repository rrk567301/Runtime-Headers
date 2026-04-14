@class NSMutableArray;

@interface AWDHomeKitCameraConfigurationData : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char isDemoConfiguration : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *homeConfigurations;
@property (nonatomic) BOOL hasIsDemoConfiguration;
@property (nonatomic) BOOL isDemoConfiguration;

+ (Class)homeConfigurationsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)addHomeConfigurations:(id)a0;
- (unsigned long long)homeConfigurationsCount;
- (void)clearHomeConfigurations;
- (id)homeConfigurationsAtIndex:(unsigned long long)a0;

@end
