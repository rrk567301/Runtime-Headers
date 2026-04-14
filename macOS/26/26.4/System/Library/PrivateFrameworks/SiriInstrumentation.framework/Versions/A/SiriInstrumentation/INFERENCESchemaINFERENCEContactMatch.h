@class INFERENCESchemaINFERENCEContactSignalSet, INFERENCESchemaINFERENCEContactFeatureSet, NSData, INFERENCESchemaINFERENCEBackgroundContactSignalSet, INFERENCESchemaINFERENCEContact;

@interface INFERENCESchemaINFERENCEContactMatch : SISchemaInstrumentationMessage {
    struct { unsigned char score : 1; unsigned char isShownToUser : 1; } _has;
}

@property (retain, nonatomic) INFERENCESchemaINFERENCEContact *contactValue;
@property (nonatomic) BOOL hasContactValue;
@property (retain, nonatomic) INFERENCESchemaINFERENCEContactSignalSet *contactSignalSet;
@property (nonatomic) BOOL hasContactSignalSet;
@property (retain, nonatomic) INFERENCESchemaINFERENCEBackgroundContactSignalSet *backgroundSignalSet;
@property (nonatomic) BOOL hasBackgroundSignalSet;
@property (retain, nonatomic) INFERENCESchemaINFERENCEContactFeatureSet *featureSet;
@property (nonatomic) BOOL hasFeatureSet;
@property (nonatomic) float score;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) BOOL isShownToUser;
@property (nonatomic) BOOL hasIsShownToUser;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteBackgroundSignalSet;
- (void)deleteContactSignalSet;
- (void)deleteContactValue;
- (void)deleteFeatureSet;
- (void)deleteIsShownToUser;
- (void)deleteScore;

@end
