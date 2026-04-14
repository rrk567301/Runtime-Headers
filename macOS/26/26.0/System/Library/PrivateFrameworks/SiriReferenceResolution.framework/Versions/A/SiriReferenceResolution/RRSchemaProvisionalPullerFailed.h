@class NSString, NSData;

@interface RRSchemaProvisionalPullerFailed : SISchemaInstrumentationMessage {
    struct { unsigned char timeout : 1; } _has;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) BOOL timeout;
@property (nonatomic) BOOL hasTimeout;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
