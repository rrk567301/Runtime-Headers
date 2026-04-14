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
- (BOOL)hasChangesAffectingSharingComposition;
- (id)init;
- (void)addHighlightContainerChange:(id)a0 sourceHighlightID:(id)a1 destinationHighlightID:(id)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)hasSuggestionChanges;
- (BOOL)hasSharingOrSuggestionChanges;
- (void)encodeWithCoder:(id)a0;
- (void)mergeChangesFrom:(id)a0;
- (BOOL)hasSharingChanges;

@end
