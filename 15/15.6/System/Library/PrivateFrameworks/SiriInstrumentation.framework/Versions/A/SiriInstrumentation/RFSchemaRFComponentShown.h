@class NSString, NSData;

@interface RFSchemaRFComponentShown : SISchemaInstrumentationMessage {
    struct { unsigned char component : 1; } _has;
}

@property (nonatomic) int component;
@property (nonatomic) char hasComponent;
@property (copy, nonatomic) NSString *componentName;
@property (nonatomic) char hasComponentName;
@property (copy, nonatomic) NSString *componentIndex;
@property (nonatomic) char hasComponentIndex;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteComponent;
- (void)deleteComponentIndex;
- (void)deleteComponentName;
- (id)suppressMessageUnderConditions;

@end
