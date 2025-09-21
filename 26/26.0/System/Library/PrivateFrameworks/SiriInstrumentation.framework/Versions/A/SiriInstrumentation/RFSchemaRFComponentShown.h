@class NSString, NSData;

@interface RFSchemaRFComponentShown : SISchemaInstrumentationMessage {
    struct { unsigned char component : 1; } _has;
}

@property (nonatomic) int component;
@property (nonatomic) BOOL hasComponent;
@property (copy, nonatomic) NSString *componentName;
@property (nonatomic) BOOL hasComponentName;
@property (copy, nonatomic) NSString *componentIndex;
@property (nonatomic) BOOL hasComponentIndex;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteComponent;
- (void)deleteComponentIndex;
- (void)deleteComponentName;

@end
