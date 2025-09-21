@class NSString, ASRSchemaASREntityMetadata, NSData;

@interface ASRSchemaASRToken : SISchemaInstrumentationMessage {
    struct { unsigned char linkIndex : 1; unsigned char startTimeInNs : 1; unsigned char endTimeInNs : 1; unsigned char appendSpaceAfter : 1; unsigned char silenceStartTimeInNs : 1; unsigned char confidence : 1; unsigned char isAutoPunctuation : 1; unsigned char isModifiedByAutoPunctuation : 1; unsigned char graphCost : 1; unsigned char acousticCost : 1; } _has;
}

@property (nonatomic) unsigned int linkIndex;
@property (nonatomic) char hasLinkIndex;
@property (nonatomic) unsigned long long startTimeInNs;
@property (nonatomic) char hasStartTimeInNs;
@property (nonatomic) unsigned long long endTimeInNs;
@property (nonatomic) char hasEndTimeInNs;
@property (nonatomic) char appendSpaceAfter;
@property (nonatomic) char hasAppendSpaceAfter;
@property (nonatomic) unsigned long long silenceStartTimeInNs;
@property (nonatomic) char hasSilenceStartTimeInNs;
@property (nonatomic) int confidence;
@property (nonatomic) char hasConfidence;
@property (copy, nonatomic) NSString *punctuationText;
@property (nonatomic) char hasPunctuationText;
@property (nonatomic) char isAutoPunctuation;
@property (nonatomic) char hasIsAutoPunctuation;
@property (nonatomic) char isModifiedByAutoPunctuation;
@property (nonatomic) char hasIsModifiedByAutoPunctuation;
@property (nonatomic) double graphCost;
@property (nonatomic) char hasGraphCost;
@property (nonatomic) double acousticCost;
@property (nonatomic) char hasAcousticCost;
@property (retain, nonatomic) ASRSchemaASREntityMetadata *entityMetadata;
@property (nonatomic) char hasEntityMetadata;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteGraphCost;
- (void)deleteLinkIndex;
- (void)deleteAcousticCost;
- (void)deleteAppendSpaceAfter;
- (void)deleteConfidence;
- (void)deleteEndTimeInNs;
- (void)deleteEntityMetadata;
- (void)deleteIsAutoPunctuation;
- (void)deleteIsModifiedByAutoPunctuation;
- (void)deletePunctuationText;
- (void)deleteSilenceStartTimeInNs;
- (void)deleteStartTimeInNs;
- (id)suppressMessageUnderConditions;

@end
