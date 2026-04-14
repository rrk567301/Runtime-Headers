@class NSArray;

@interface IMRichCards : NSObject <IMAttributableContent> {
    void /* function */ cards;
}

@property (nonatomic, readonly) NSArray *cards;
@property (nonatomic, readonly) long long hash;

- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)init;
- (id)expandToIndividualCard;
- (id)initWithCardArray:(id)a0;
- (id)initWithCards:(id)a0;
- (id)previewText;
- (id)relayDictionaryRepresentation;
- (id)suggestedActionsList;
- (id)suggestedRepliesList;
- (void)updateUrlToTransferMap:(id)a0;

@end
