@class NSString, NSData;

@interface PLUSSchemaPLUSRECTIFIPatternItem : SISchemaInstrumentationMessage {
    struct { unsigned char itemSource : 1; unsigned char itemType : 1; unsigned char relativeTimestampInMs : 1; } _has;
}

@property (nonatomic) int itemSource;
@property (nonatomic) char hasItemSource;
@property (nonatomic) int itemType;
@property (nonatomic) char hasItemType;
@property (nonatomic) unsigned long long relativeTimestampInMs;
@property (nonatomic) char hasRelativeTimestampInMs;
@property (copy, nonatomic) NSString *cdmMatchingSpanLabel;
@property (nonatomic) char hasCdmMatchingSpanLabel;
@property (copy, nonatomic) NSString *uufrSaidDialogIdentifier;
@property (nonatomic) char hasUufrSaidDialogIdentifier;
@property (copy, nonatomic) NSString *itemDomainName;
@property (nonatomic) char hasItemDomainName;
@property (copy, nonatomic) NSString *itemPayload;
@property (nonatomic) char hasItemPayload;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichPatternitemcontent;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCdmMatchingSpanLabel;
- (void)deleteItemDomainName;
- (void)deleteItemPayload;
- (void)deleteItemSource;
- (void)deleteItemType;
- (void)deleteRelativeTimestampInMs;
- (void)deleteUufrSaidDialogIdentifier;
- (id)suppressMessageUnderConditions;

@end
