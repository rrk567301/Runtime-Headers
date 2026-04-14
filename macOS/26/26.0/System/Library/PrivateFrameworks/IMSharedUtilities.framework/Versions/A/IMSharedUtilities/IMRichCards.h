@class NSArray;

@interface IMRichCards : NSObject <IMAttributableContent> {
    void /* function */ cards;
}

@property (nonatomic, readonly) NSArray *cards;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)expandToIndividualCard;
- (id)initWithCardArray:(id)a0;
- (id)initWithCards:(id)a0;
- (id)previewText;
- (id)relayDictionaryRepresentation;
- (id)suggestedActionsList;
- (id)suggestedRepliesList;
- (void)updateUrlToTransferMap:(id)a0;

@end
