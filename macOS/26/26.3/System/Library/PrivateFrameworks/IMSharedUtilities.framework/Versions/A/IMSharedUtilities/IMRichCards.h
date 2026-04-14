@class NSArray;

@interface IMRichCards : NSObject <IMAttributableContent> {
    void /* function */ cards;
}

@property (nonatomic, readonly) NSArray *cards;
@property (nonatomic, readonly) long long hash;

- (id)dictionaryRepresentation;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)expandToIndividualCard;
- (id)initWithCardArray:(id)a0;
- (id)initWithCards:(id)a0;
- (id)previewText;
- (id)relayDictionaryRepresentation;
- (id)suggestedActionsList;
- (id)suggestedRepliesList;
- (void)updateUrlToTransferMap:(id)a0;

@end
