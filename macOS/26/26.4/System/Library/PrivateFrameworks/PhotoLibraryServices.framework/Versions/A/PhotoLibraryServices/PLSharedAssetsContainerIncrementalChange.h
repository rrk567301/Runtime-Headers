@class NSArray;

@interface PLSharedAssetsContainerIncrementalChange : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long collectionChangeType;
@property (nonatomic) long long sharingChange;
@property (nonatomic) unsigned char suggestionStateChange;
@property (nonatomic) unsigned char mediaType;
@property (nonatomic) BOOL hasNoOtherAssetChangesRequiringMomentGeneration;
@property (retain, nonatomic) NSArray *highlightContainerChanges;

- (id)debugDescription;
- (BOOL)hasChangesAffectingSharingComposition;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasSuggestionChanges;
- (unsigned long long)hash;
- (BOOL)hasSharingOrSuggestionChanges;
- (id)init;
- (void)mergeChangesFrom:(id)a0;
- (BOOL)hasSharingChanges;
- (BOOL)hasChanges;
- (id)initWithCoder:(id)a0;
- (void)addHighlightContainerChange:(id)a0 sourceHighlightID:(id)a1 destinationHighlightID:(id)a2;

@end
