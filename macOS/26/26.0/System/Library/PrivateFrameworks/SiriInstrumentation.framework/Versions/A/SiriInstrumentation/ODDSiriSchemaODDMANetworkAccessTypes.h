@class NSData;

@interface ODDSiriSchemaODDMANetworkAccessTypes : SISchemaInstrumentationMessage {
    struct { unsigned char cellularAccessRequest : 1; unsigned char cellularAccessResponse : 1; unsigned char constrainedNetworkAccessRequest : 1; unsigned char constrainedNetworkAccessResponse : 1; unsigned char expensiveNetworkAccessRequest : 1; unsigned char expensiveNetworkAccessResponse : 1; } _has;
}

@property (nonatomic) BOOL cellularAccessRequest;
@property (nonatomic) BOOL hasCellularAccessRequest;
@property (nonatomic) BOOL cellularAccessResponse;
@property (nonatomic) BOOL hasCellularAccessResponse;
@property (nonatomic) BOOL constrainedNetworkAccessRequest;
@property (nonatomic) BOOL hasConstrainedNetworkAccessRequest;
@property (nonatomic) BOOL constrainedNetworkAccessResponse;
@property (nonatomic) BOOL hasConstrainedNetworkAccessResponse;
@property (nonatomic) BOOL expensiveNetworkAccessRequest;
@property (nonatomic) BOOL hasExpensiveNetworkAccessRequest;
@property (nonatomic) BOOL expensiveNetworkAccessResponse;
@property (nonatomic) BOOL hasExpensiveNetworkAccessResponse;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteCellularAccessRequest;
- (void)deleteCellularAccessResponse;
- (void)deleteConstrainedNetworkAccessRequest;
- (void)deleteConstrainedNetworkAccessResponse;
- (void)deleteExpensiveNetworkAccessRequest;
- (void)deleteExpensiveNetworkAccessResponse;

@end
