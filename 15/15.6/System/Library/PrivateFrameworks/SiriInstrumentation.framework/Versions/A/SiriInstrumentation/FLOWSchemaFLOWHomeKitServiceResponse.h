@class NSData;

@interface FLOWSchemaFLOWHomeKitServiceResponse : SISchemaInstrumentationMessage {
    struct { unsigned char homeKitServiceType : 1; unsigned char numServicesCompleted : 1; unsigned char numServicesFailed : 1; } _has;
}

@property (nonatomic) int homeKitServiceType;
@property (nonatomic) char hasHomeKitServiceType;
@property (nonatomic) int numServicesCompleted;
@property (nonatomic) char hasNumServicesCompleted;
@property (nonatomic) int numServicesFailed;
@property (nonatomic) char hasNumServicesFailed;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteHomeKitServiceType;
- (void)deleteNumServicesCompleted;
- (void)deleteNumServicesFailed;
- (id)suppressMessageUnderConditions;

@end
