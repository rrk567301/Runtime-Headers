@class NSString, NSData;

@interface RRSchemaProvisionalPullerFailed : SISchemaInstrumentationMessage {
    struct { unsigned char timeout : 1; } _has;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) char hasName;
@property (nonatomic) char timeout;
@property (nonatomic) char hasTimeout;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end
