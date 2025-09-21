@class NSString;

@interface PSGPBQuery : PBCodable <NSCopying> {
    struct { unsigned char maxPredictionItems : 1; unsigned char maxStructuredInfoItems : 1; unsigned char maxTextualResponseItems : 1; unsigned char hasContextBeforeInput : 1; unsigned char hasRecipientNames : 1; unsigned char hasResponseContext : 1; unsigned char isDocumentEmpty : 1; unsigned char isResponseContextBlacklisted : 1; } _has;
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
