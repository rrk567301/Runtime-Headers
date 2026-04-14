@class HPDResult, HPDQuery;

@interface SCTHelpItemGRL : SCTGRL {
    HPDResult *mSearchResult;
    HPDQuery *mHelpQuery;
}

- (id)imageTintColor;
- (id)init;
- (void)perform;
- (void)dealloc;
- (id)initWithCategory:(id)a0;
- (unsigned long long)imageScaling;
- (void)show;
- (id)initWithSearchResult:(id)a0 withQuery:(id)a1;
- (id)fullTitle;
- (BOOL)isShowAllItem;
- (id)localizedCategory;
- (id)representativeIconForSelectedState:(BOOL)a0;

@end
