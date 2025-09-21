@class NSData, NSString, IFTSchemaIFTDateComponents, IFTSchemaIFTPlacemark, IFTSchemaIFTMeasurement, IFTSchemaIFTFile, IFTSchemaIFTCurrencyAmount, IFTSchemaIFTPaymentMethod, IFTSchemaIFTApp, IFTSchemaIFTPerson;

@interface IFTSchemaIFTPrimitiveValue : SISchemaInstrumentationMessage

@property (nonatomic) BOOL primitiveNull;
@property (nonatomic) BOOL hasPrimitiveNull;
@property (nonatomic) BOOL primitiveBool;
@property (nonatomic) BOOL hasPrimitiveBool;
@property (nonatomic) long long primitiveInt;
@property (nonatomic) BOOL hasPrimitiveInt;
@property (nonatomic) double primitiveDouble;
@property (nonatomic) BOOL hasPrimitiveDouble;
@property (copy, nonatomic) NSString *primitiveDecimal;
@property (nonatomic) BOOL hasPrimitiveDecimal;
@property (retain, nonatomic) IFTSchemaIFTDateComponents *primitiveDateComponents;
@property (nonatomic) BOOL hasPrimitiveDateComponents;
@property (retain, nonatomic) IFTSchemaIFTMeasurement *measurement;
@property (nonatomic) BOOL hasMeasurement;
@property (retain, nonatomic) IFTSchemaIFTCurrencyAmount *currencyAmount;
@property (nonatomic) BOOL hasCurrencyAmount;
@property (retain, nonatomic) IFTSchemaIFTPaymentMethod *paymentMethod;
@property (nonatomic) BOOL hasPaymentMethod;
@property (retain, nonatomic) IFTSchemaIFTPlacemark *placemark;
@property (nonatomic) BOOL hasPlacemark;
@property (retain, nonatomic) IFTSchemaIFTPerson *person;
@property (nonatomic) BOOL hasPerson;
@property (retain, nonatomic) IFTSchemaIFTFile *file;
@property (nonatomic) BOOL hasFile;
@property (retain, nonatomic) IFTSchemaIFTApp *app;
@property (nonatomic) BOOL hasApp;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Primitivevalue;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deletePlacemark;
- (void)deleteApp;
- (void)deleteCurrencyAmount;
- (void)deleteFile;
- (void)deleteMeasurement;
- (void)deletePaymentMethod;
- (void)deletePerson;
- (void)deletePrimitiveBool;
- (void)deletePrimitiveDateComponents;
- (void)deletePrimitiveDecimal;
- (void)deletePrimitiveDouble;
- (void)deletePrimitiveInt;
- (void)deletePrimitiveNull;

@end
