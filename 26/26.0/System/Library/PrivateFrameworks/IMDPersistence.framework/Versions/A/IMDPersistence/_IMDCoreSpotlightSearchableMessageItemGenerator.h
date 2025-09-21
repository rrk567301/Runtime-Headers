@class CSSearchableItemAttributeSet, NSDictionary, IMDIndexingContext, NSMutableSet, NSMutableArray, IMDCoreSpotlightSearchableItemGenerator;

@interface _IMDCoreSpotlightSearchableMessageItemGenerator : NSObject

@property (readonly, nonatomic) IMDCoreSpotlightSearchableItemGenerator *generator;
@property (readonly, nonatomic) NSDictionary *itemDictionary;
@property (readonly, nonatomic) NSDictionary *chatDictionary;
@property (readonly, nonatomic) IMDIndexingContext *context;
@property (readonly, nonatomic) NSMutableArray *rejectedItems;
@property (readonly, nonatomic) NSMutableSet *populatedChatItems;
@property (nonatomic) BOOL threwException;
@property (nonatomic) BOOL bailed;
@property (retain, nonatomic) CSSearchableItemAttributeSet *metadataAttributes;
@property (readonly, nonatomic) NSMutableArray *auxItems;
@property (readonly, nonatomic) NSMutableArray *generatedItems;

- (id)descriptor;
- (BOOL)isValid;
- (id)date;
- (id)indexers;
- (void).cxx_destruct;
- (id)chatGUID;
- (id)messageGUID;
- (id)generate;
- (id)chatDisplayName;
- (void)_addTimeSensitiveListenerIfNeededForSearchableItem:(id)a0;
- (void)_generateHiddenRootItem;
- (void)_generateTextParts;
- (void)_generateVisibleRootItem;
- (BOOL)_populateMetadataAttributesAndCreateAuxItems;
- (id)initWithGenerator:(id)a0 messageItemDictionary:(id)a1 chatDictionary:(id)a2 context:(id)a3 rejectedItems:(id)a4 populatedChatItems:(id)a5;
- (BOOL)isDenylisted;
- (BOOL)isMultiPart;
- (BOOL)isOtherPluginMessage;
- (id)threadOriginatorFormattedGUID;

@end
