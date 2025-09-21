@class NSString;

@interface PSGPBImpression : PBCodable <NSCopying> {
    struct { unsigned char dataSourceType : 1; unsigned char maxPredictionItems : 1; unsigned char maxStructuredInfoItems : 1; unsigned char maxTextualResponseItems : 1; unsigned char numStructuredInfoItems : 1; unsigned char numTextualResponseItems : 1; unsigned char triggerSourceType : 1; unsigned char hasContextBeforeInput : 1; unsigned char hasRecipientNames : 1; unsigned char hasResponseContext : 1; unsigned char isDocumentEmpty : 1; unsigned char isResponseContextBlacklisted : 1; } _has;
}

@property (readonly, nonatomic) char hasExperimentId;
@property (retain, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) char hasTreatmentId;
@property (retain, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) char hasTreatmentName;
@property (retain, nonatomic) NSString *treatmentName;
@property (nonatomic) char hasHasResponseContext;
@property (nonatomic) char hasResponseContext;
@property (nonatomic) char hasIsResponseContextBlacklisted;
@property (nonatomic) char isResponseContextBlacklisted;
@property (nonatomic) char hasIsDocumentEmpty;
@property (nonatomic) char isDocumentEmpty;
@property (readonly, nonatomic) char hasTextContentType;
@property (retain, nonatomic) NSString *textContentType;
@property (nonatomic) char hasHasContextBeforeInput;
@property (nonatomic) char hasContextBeforeInput;
@property (nonatomic) char hasHasRecipientNames;
@property (nonatomic) char hasRecipientNames;
@property (readonly, nonatomic) char hasLocaleIdentifier;
@property (retain, nonatomic) NSString *localeIdentifier;
@property (readonly, nonatomic) char hasBundleIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) char hasMaxTextualResponseItems;
@property (nonatomic) unsigned int maxTextualResponseItems;
@property (nonatomic) char hasMaxStructuredInfoItems;
@property (nonatomic) unsigned int maxStructuredInfoItems;
@property (nonatomic) char hasMaxPredictionItems;
@property (nonatomic) unsigned int maxPredictionItems;
@property (readonly, nonatomic) char hasInitiatingProcess;
@property (retain, nonatomic) NSString *initiatingProcess;
@property (nonatomic) char hasNumTextualResponseItems;
@property (nonatomic) unsigned int numTextualResponseItems;
@property (readonly, nonatomic) char hasTextualResponseCategory;
@property (retain, nonatomic) NSString *textualResponseCategory;
@property (nonatomic) char hasNumStructuredInfoItems;
@property (nonatomic) unsigned int numStructuredInfoItems;
@property (nonatomic) char hasDataSourceType;
@property (nonatomic) int dataSourceType;
@property (nonatomic) char hasTriggerSourceType;
@property (nonatomic) int triggerSourceType;
@property (readonly, nonatomic) char hasTriggerCategory;
@property (retain, nonatomic) NSString *triggerCategory;
@property (readonly, nonatomic) char hasTriggerAttributeType;
@property (retain, nonatomic) NSString *triggerAttributeType;
@property (readonly, nonatomic) char hasTriggerAttributeSubtype;
@property (retain, nonatomic) NSString *triggerAttributeSubtype;
@property (readonly, nonatomic) char hasTriggerAttributeField;
@property (retain, nonatomic) NSString *triggerAttributeField;

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
- (int)StringAsDataSourceType:(id)a0;
- (int)StringAsTriggerSourceType:(id)a0;
- (id)dataSourceTypeAsString:(int)a0;
- (id)triggerSourceTypeAsString:(int)a0;

@end
