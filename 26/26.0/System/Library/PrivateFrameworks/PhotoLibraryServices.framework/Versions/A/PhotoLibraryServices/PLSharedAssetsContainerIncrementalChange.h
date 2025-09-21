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
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (BOOL)hasSharingOrSuggestionChanges;
- (BOOL)hasSharingChanges;
- (void)addHighlightContainerChange:(id)a0 sourceHighlightID:(id)a1 destinationHighlightID:(id)a2;
- (id)initWithCoder:(id)a0;
- (BOOL)hasChangesAffectingSharingComposition;
- (BOOL)hasSuggestionChanges;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)mergeChangesFrom:(id)a0;
- (void).cxx_destruct;

@end
