@class PPSPBMetricType, NSString, PPSPBUnit, PPSPBGroupingDimensions, PPSPBEnumMapping, PPSPBRounding, PPSPBCadence, PPSPBSource;

@interface PPSPBMetric : PBCodable <NSCopying> {
    struct { unsigned char version : 1; unsigned char auxiliaryType : 1; unsigned char datatype : 1; unsigned char deviceCapability : 1; unsigned char directionality : 1; unsigned char enabledPopulation : 1; unsigned char fixedArraySize : 1; unsigned char mode : 1; unsigned char obfuscation : 1; unsigned char privacyClassification : 1; unsigned char storage : 1; unsigned char timeToLive : 1; unsigned char dmaCompliant : 1; unsigned char filterEntryLogging : 1; } _has;
}

@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) char hasSubsystem;
@property (retain, nonatomic) NSString *subsystem;
@property (readonly, nonatomic) char hasCategory;
@property (retain, nonatomic) NSString *category;
@property (nonatomic) char hasVersion;
@property (nonatomic) double version;
@property (nonatomic) char hasDatatype;
@property (nonatomic) int datatype;
@property (readonly, nonatomic) char hasUnit;
@property (retain, nonatomic) PPSPBUnit *unit;
@property (readonly, nonatomic) char hasCadence;
@property (retain, nonatomic) PPSPBCadence *cadence;
@property (nonatomic) char hasDirectionality;
@property (nonatomic) int directionality;
@property (nonatomic) char hasStorage;
@property (nonatomic) int storage;
@property (nonatomic) char hasTimeToLive;
@property (nonatomic) unsigned int timeToLive;
@property (nonatomic) char hasMode;
@property (nonatomic) int mode;
@property (readonly, nonatomic) char hasSource;
@property (retain, nonatomic) PPSPBSource *source;
@property (nonatomic) char hasDeviceCapability;
@property (nonatomic) int deviceCapability;
@property (nonatomic) char hasEnabledPopulation;
@property (nonatomic) int enabledPopulation;
@property (readonly, nonatomic) char hasRounding;
@property (retain, nonatomic) PPSPBRounding *rounding;
@property (nonatomic) char hasObfuscation;
@property (nonatomic) int obfuscation;
@property (readonly, nonatomic) char hasMetricDescription;
@property (retain, nonatomic) NSString *metricDescription;
@property (readonly, nonatomic) char hasExampleValue;
@property (retain, nonatomic) NSString *exampleValue;
@property (readonly, nonatomic) char hasBuild;
@property (retain, nonatomic) NSString *build;
@property (nonatomic) char hasPrivacyClassification;
@property (nonatomic) int privacyClassification;
@property (readonly, nonatomic) char hasEnumMapping;
@property (retain, nonatomic) PPSPBEnumMapping *enumMapping;
@property (readonly, nonatomic) char hasGroupBy;
@property (retain, nonatomic) PPSPBGroupingDimensions *groupBy;
@property (readonly, nonatomic) char hasMetricType;
@property (retain, nonatomic) PPSPBMetricType *metricType;
@property (nonatomic) char hasAuxiliaryType;
@property (nonatomic) int auxiliaryType;
@property (nonatomic) char hasFilterEntryLogging;
@property (nonatomic) char filterEntryLogging;
@property (nonatomic) char hasDmaCompliant;
@property (nonatomic) char dmaCompliant;
@property (nonatomic) char hasFixedArraySize;
@property (nonatomic) unsigned int fixedArraySize;

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
