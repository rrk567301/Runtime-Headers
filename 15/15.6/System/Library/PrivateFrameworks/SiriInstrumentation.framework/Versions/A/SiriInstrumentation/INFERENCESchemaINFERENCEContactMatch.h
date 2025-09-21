@class INFERENCESchemaINFERENCEContactSignalSet, INFERENCESchemaINFERENCEContactFeatureSet, NSData, INFERENCESchemaINFERENCEBackgroundContactSignalSet, INFERENCESchemaINFERENCEContact;

@interface INFERENCESchemaINFERENCEContactMatch : SISchemaInstrumentationMessage {
    struct { unsigned char score : 1; unsigned char isShownToUser : 1; } _has;
}

@property (retain, nonatomic) INFERENCESchemaINFERENCEContact *contactValue;
@property (nonatomic) char hasContactValue;
@property (retain, nonatomic) INFERENCESchemaINFERENCEContactSignalSet *contactSignalSet;
@property (nonatomic) char hasContactSignalSet;
@property (retain, nonatomic) INFERENCESchemaINFERENCEBackgroundContactSignalSet *backgroundSignalSet;
@property (nonatomic) char hasBackgroundSignalSet;
@property (retain, nonatomic) INFERENCESchemaINFERENCEContactFeatureSet *featureSet;
@property (nonatomic) char hasFeatureSet;
@property (nonatomic) float score;
@property (nonatomic) char hasScore;
@property (nonatomic) char isShownToUser;
@property (nonatomic) char hasIsShownToUser;
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
- (void)deleteBackgroundSignalSet;
- (void)deleteContactSignalSet;
- (void)deleteContactValue;
- (void)deleteFeatureSet;
- (void)deleteIsShownToUser;
- (void)deleteScore;
- (id)suppressMessageUnderConditions;

@end
