@class NSString, USOSchemaUSOPayloadAttachmentInfo, NSData, USOSchemaUSOMatchInfo;

@interface USOSchemaUSOEntitySpan : SISchemaInstrumentationMessage {
    struct { unsigned char nodeIndex : 1; unsigned char sourceComponent : 1; unsigned char startIndex : 1; unsigned char endIndex : 1; unsigned char originAppBundleIdType : 1; } _has;
}

@property (nonatomic) unsigned int nodeIndex;
@property (nonatomic) char hasNodeIndex;
@property (nonatomic) int sourceComponent;
@property (nonatomic) char hasSourceComponent;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) char hasLabel;
@property (retain, nonatomic) USOSchemaUSOMatchInfo *matchInfo;
@property (nonatomic) char hasMatchInfo;
@property (nonatomic) unsigned int startIndex;
@property (nonatomic) char hasStartIndex;
@property (nonatomic) unsigned int endIndex;
@property (nonatomic) char hasEndIndex;
@property (nonatomic) int originAppBundleIdType;
@property (nonatomic) char hasOriginAppBundleIdType;
@property (retain, nonatomic) USOSchemaUSOPayloadAttachmentInfo *payloadAttachmentInfo;
@property (nonatomic) char hasPayloadAttachmentInfo;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteMatchInfo;
- (void)deleteNodeIndex;
- (void)deleteEndIndex;
- (void)deleteLabel;
- (void)deleteOriginAppBundleIdType;
- (void)deletePayloadAttachmentInfo;
- (void)deleteSourceComponent;
- (void)deleteStartIndex;
- (id)suppressMessageUnderConditions;

@end
