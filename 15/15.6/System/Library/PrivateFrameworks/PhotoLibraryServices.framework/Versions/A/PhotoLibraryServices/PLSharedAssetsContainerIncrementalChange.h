@class NSArray;

@interface PLSharedAssetsContainerIncrementalChange : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long collectionChangeType;
@property (nonatomic) long long sharingChange;
@property (nonatomic) unsigned char suggestionStateChange;
@property (nonatomic) unsigned char mediaType;
@property (nonatomic) char hasNoOtherAssetChangesRequiringMomentGeneration;
@property (retain, nonatomic) NSArray *highlightContainerChanges;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)hasChanges;
- (void)mergeChangesFrom:(id)a0;
- (void)addHighlightContainerChange:(id)a0 sourceHighlightID:(id)a1 destinationHighlightID:(id)a2;
- (char)hasChangesAffectingSharingComposition;
- (char)hasSharingChanges;
- (char)hasSharingOrSuggestionChanges;
- (char)hasSuggestionChanges;

@end
