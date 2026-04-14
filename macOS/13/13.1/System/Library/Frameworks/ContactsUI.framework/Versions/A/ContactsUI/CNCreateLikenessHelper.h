@protocol CNUIParentContainerCache;

@interface CNCreateLikenessHelper : NSObject

@property (retain, nonatomic) id<CNUIParentContainerCache> parentContainerCache;

+ (void)modifyLikeness:(id)a0 forContainer:(id)a1 contact:(id)a2;
+ (id)likenessForContact:(id)a0 inRecentLikenesses:(id)a1;
+ (id)firstWritableLikenessInRecentLikenesses:(id)a0;
+ (id)replaceLikeness:(id)a0 inRecentLikenesses:(id)a1 withLikeness:(id)a2;

- (void).cxx_destruct;
- (id)initWithParentContainerCache:(id)a0;
- (id)likenessesModelForNewLikeness:(id)a0 currentLikenessesModel:(id)a1 contact:(id)a2;
- (id)likenessesModelForUpdatedLikeness:(id)a0 currentLikenessModel:(id)a1 contact:(id)a2;
- (id)linkedLikenessesModelForNewLikeness:(id)a0 currentLikenessesModel:(id)a1 contact:(id)a2;
- (id)nonLinkedLikenessesModelForNewLikeness:(id)a0 currentLikenessesModel:(id)a1 contact:(id)a2;

@end
