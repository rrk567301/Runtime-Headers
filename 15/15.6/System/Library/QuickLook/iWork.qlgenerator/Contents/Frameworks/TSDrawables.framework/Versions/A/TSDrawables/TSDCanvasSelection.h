@class TSDInfoCollectionSelectionHelper, NSSet, NSString;

@interface TSDCanvasSelection : TSKSelection <TSDCanvasSelection>

@property (retain, nonatomic) TSDInfoCollectionSelectionHelper *selectionHelper;
@property (readonly, nonatomic) NSSet *modelInfos;
@property (readonly, nonatomic) NSString *subclassDescription;
@property (readonly, nonatomic) NSSet *infos;
@property (readonly, nonatomic) unsigned long long infoCount;
@property (readonly, nonatomic) char isEmpty;
@property (readonly, nonatomic) NSSet *infosWithNonInteractiveInfos;
@property (readonly, nonatomic) NSSet *nonInteractiveInfos;
@property (readonly, nonatomic) NSSet *unlockedInfos;
@property (readonly, nonatomic) unsigned long long unlockedInfoCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)archivedSelectionClass;
+ (id)emptySelection;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithInfos:(id)a0;
- (char)containsKindOfClass:(Class)a0;
- (char)containsUnlockedKindOfClass:(Class)a0;
- (id)infosOfClass:(Class)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (id)UUIDDescription;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)initWithInteractiveInfos:(id)a0 nonInteractiveInfos:(id)a1;
- (char)providesActivityDescription;

@end
