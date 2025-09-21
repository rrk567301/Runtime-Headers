@class NSString, NSMutableArray;

@interface ATXPBModeConfigurationUIFlowLoggingEvent : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    struct { unsigned char secondsSinceReferenceDate : 1; unsigned char modeConfigurationEntityType : 1; unsigned char modeConfigurationType : 1; unsigned char modeConfigurationUI : 1; } _has;
}

@property (nonatomic) char hasSecondsSinceReferenceDate;
@property (nonatomic) double secondsSinceReferenceDate;
@property (readonly, nonatomic) char hasDndModeUUID;
@property (retain, nonatomic) NSString *dndModeUUID;
@property (nonatomic) char hasModeConfigurationUI;
@property (nonatomic) int modeConfigurationUI;
@property (nonatomic) char hasModeConfigurationEntityType;
@property (nonatomic) int modeConfigurationEntityType;
@property (retain, nonatomic) NSMutableArray *previousEntityIdentifiers;
@property (retain, nonatomic) NSMutableArray *suggestedEntityIdentifiers;
@property (retain, nonatomic) NSMutableArray *currentEntityIdentifiers;
@property (nonatomic) char hasModeConfigurationType;
@property (nonatomic) int modeConfigurationType;
@property (retain, nonatomic) NSMutableArray *candidateEntityIdentifiers;

+ (Class)candidateEntityIdentifiersType;
+ (Class)currentEntityIdentifiersType;
+ (Class)previousEntityIdentifiersType;
+ (Class)suggestedEntityIdentifiersType;

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
- (id)jsonRepresentation;
- (int)StringAsModeConfigurationType:(id)a0;
- (void)clearSuggestedEntityIdentifiers;
- (int)StringAsModeConfigurationEntityType:(id)a0;
- (int)StringAsModeConfigurationUI:(id)a0;
- (unsigned long long)candidateEntityIdentifiersCount;
- (void)clearCandidateEntityIdentifiers;
- (unsigned long long)suggestedEntityIdentifiersCount;
- (void)addCandidateEntityIdentifiers:(id)a0;
- (void)addCurrentEntityIdentifiers:(id)a0;
- (void)addPreviousEntityIdentifiers:(id)a0;
- (void)addSuggestedEntityIdentifiers:(id)a0;
- (id)candidateEntityIdentifiersAtIndex:(unsigned long long)a0;
- (void)clearCurrentEntityIdentifiers;
- (void)clearPreviousEntityIdentifiers;
- (id)currentEntityIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)currentEntityIdentifiersCount;
- (id)initFromJSON:(id)a0;
- (id)modeConfigurationEntityTypeAsString:(int)a0;
- (id)modeConfigurationTypeAsString:(int)a0;
- (id)modeConfigurationUIAsString:(int)a0;
- (id)previousEntityIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)previousEntityIdentifiersCount;
- (id)suggestedEntityIdentifiersAtIndex:(unsigned long long)a0;

@end
