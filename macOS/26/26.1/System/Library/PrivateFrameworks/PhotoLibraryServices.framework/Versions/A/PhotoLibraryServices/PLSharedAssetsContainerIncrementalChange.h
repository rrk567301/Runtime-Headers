@class NSArray;

@interface PLSharedAssetsContainerIncrementalChange : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long collectionChangeType;
@property (nonatomic) long long sharingChange;
@property (nonatomic) unsigned char suggestionStateChange;
@property (nonatomic) unsigned char mediaType;
@property (nonatomic) BOOL hasNoOtherAssetChangesRequiringMomentGeneration;
@property (retain, nonatomic) NSArray *highlightContainerChanges;

- (BOOL)hasChanges;
- (void)mergeChangesFrom:(id)a0;
- (unsigned long long)hash;
- (BOOL)hasSharingOrSuggestionChanges;
- (void)encodeWithCoder:(id)a0;
- (void)addHighlightContainerChange:(id)a0 sourceHighlightID:(id)a1 destinationHighlightID:(id)a2;
- (BOOL)hasSharingChanges;
- (BOOL)hasSuggestionChanges;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)hasChangesAffectingSharingComposition;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
