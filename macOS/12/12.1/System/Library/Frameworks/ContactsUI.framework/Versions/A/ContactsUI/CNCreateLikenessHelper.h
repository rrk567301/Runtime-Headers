@class CNUIMeContactMonitor;
@protocol CNUIParentContainerCache;

@interface CNCreateLikenessHelper : NSObject

@property (retain, nonatomic) id<CNUIParentContainerCache> parentContainerCache;
@property (retain, nonatomic) CNUIMeContactMonitor *meMonitor;

+ (id)likenessForContact:(id)a0 inRecentLikenesses:(id)a1;
+ (void)modifyLikeness:(id)a0 forContainer:(id)a1 contact:(id)a2;
+ (id)firstWritableLikenessInRecentLikenesses:(id)a0;
+ (id)replaceLikeness:(id)a0 inRecentLikenesses:(id)a1 withLikeness:(id)a2;

- (void).cxx_destruct;
- (id)initWithParentContainerCache:(id)a0 meMonitor:(id)a1;
- (id)linkedLikenessesModelForNewLikeness:(id)a0 currentLikenessesModel:(id)a1 contact:(id)a2;
- (id)nonLinkedLikenessesModelForNewLikeness:(id)a0 currentLikenessesModel:(id)a1 contact:(id)a2;
- (BOOL)shouldCreatePersonaLikenessForEditedLikeness:(id)a0 contact:(id)a1;
- (id)likenessesModelForNewLikeness:(id)a0 currentLikenessesModel:(id)a1 contact:(id)a2;
- (id)likenessesModelForUpdatedLikeness:(id)a0 currentLikenessModel:(id)a1 contact:(id)a2;

@end
