@class NSData, NSString, IFTSchemaIFTDateComponents, IFTSchemaIFTPlacemark, IFTSchemaIFTMeasurement, IFTSchemaIFTFile, IFTSchemaIFTCurrencyAmount, IFTSchemaIFTPaymentMethod, IFTSchemaIFTApp, IFTSchemaIFTPerson;

@interface IFTSchemaIFTPrimitiveValue : SISchemaInstrumentationMessage

@property (nonatomic) char primitiveNull;
@property (nonatomic) char hasPrimitiveNull;
@property (nonatomic) char primitiveBool;
@property (nonatomic) char hasPrimitiveBool;
@property (nonatomic) long long primitiveInt;
@property (nonatomic) char hasPrimitiveInt;
@property (nonatomic) double primitiveDouble;
@property (nonatomic) char hasPrimitiveDouble;
@property (copy, nonatomic) NSString *primitiveDecimal;
@property (nonatomic) char hasPrimitiveDecimal;
@property (retain, nonatomic) IFTSchemaIFTDateComponents *primitiveDateComponents;
@property (nonatomic) char hasPrimitiveDateComponents;
@property (retain, nonatomic) IFTSchemaIFTMeasurement *measurement;
@property (nonatomic) char hasMeasurement;
@property (retain, nonatomic) IFTSchemaIFTCurrencyAmount *currencyAmount;
@property (nonatomic) char hasCurrencyAmount;
@property (retain, nonatomic) IFTSchemaIFTPaymentMethod *paymentMethod;
@property (nonatomic) char hasPaymentMethod;
@property (retain, nonatomic) IFTSchemaIFTPlacemark *placemark;
@property (nonatomic) char hasPlacemark;
@property (retain, nonatomic) IFTSchemaIFTPerson *person;
@property (nonatomic) char hasPerson;
@property (retain, nonatomic) IFTSchemaIFTFile *file;
@property (nonatomic) char hasFile;
@property (retain, nonatomic) IFTSchemaIFTApp *app;
@property (nonatomic) char hasApp;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Primitivevalue;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteFile;
- (void)deletePlacemark;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteApp;
- (void)deleteCurrencyAmount;
- (void)deleteMeasurement;
- (void)deletePaymentMethod;
- (void)deletePerson;
- (void)deletePrimitiveBool;
- (void)deletePrimitiveDateComponents;
- (void)deletePrimitiveDecimal;
- (void)deletePrimitiveDouble;
- (void)deletePrimitiveInt;
- (void)deletePrimitiveNull;
- (id)suppressMessageUnderConditions;

@end
