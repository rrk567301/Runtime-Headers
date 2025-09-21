@class NSSet;

@interface TSDGroupSelection : TSDDrawableSelection

@property (nonatomic) char hasSelectedInfosInNonGroupContainer;
@property (readonly, nonatomic) NSSet *containerGroups;
@property (readonly, nonatomic) char isCrossContainerSelection;

+ (Class)archivedSelectionClass;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)subclassDescription;
- (id)initWithContainerGroups:(id)a0 hasSelectedInfosInNonGroupContainer:(char)a1;
- (id)initWithGroupInfo:(id)a0;

@end
