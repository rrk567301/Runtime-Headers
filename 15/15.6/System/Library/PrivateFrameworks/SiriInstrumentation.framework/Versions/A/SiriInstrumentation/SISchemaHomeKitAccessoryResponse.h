@class NSData;

@interface SISchemaHomeKitAccessoryResponse : SISchemaInstrumentationMessage {
    struct { unsigned char homeKitAccessoryType : 1; unsigned char numAccessoriesCompleted : 1; unsigned char numAccessoriesNotCompleted : 1; } _has;
}

@property (nonatomic) int homeKitAccessoryType;
@property (nonatomic) char hasHomeKitAccessoryType;
@property (nonatomic) int numAccessoriesCompleted;
@property (nonatomic) char hasNumAccessoriesCompleted;
@property (nonatomic) int numAccessoriesNotCompleted;
@property (nonatomic) char hasNumAccessoriesNotCompleted;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteHomeKitAccessoryType;
- (void)deleteNumAccessoriesCompleted;
- (void)deleteNumAccessoriesNotCompleted;
- (id)suppressMessageUnderConditions;

@end
