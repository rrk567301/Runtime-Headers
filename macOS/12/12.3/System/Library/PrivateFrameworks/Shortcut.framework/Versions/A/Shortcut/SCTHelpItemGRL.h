@class HPDResult, HPDQuery;

@interface SCTHelpItemGRL : SCTGRL {
    HPDResult *mSearchResult;
    HPDQuery *mHelpQuery;
}

- (void)dealloc;
- (id)init;
- (unsigned long long)imageScaling;
- (void)perform;
- (void)show;
- (id)initWithCategory:(id)a0;
- (id)imageTintColor;
- (id)localizedCategory;
- (id)representativeIconForSelectedState:(BOOL)a0;
- (id)fullTitle;
- (id)initWithSearchResult:(id)a0 withQuery:(id)a1;
- (BOOL)isShowAllItem;

@end
