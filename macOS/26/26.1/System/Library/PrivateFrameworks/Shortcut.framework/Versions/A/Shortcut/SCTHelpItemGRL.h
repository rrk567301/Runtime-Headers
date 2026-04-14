@class HPDResult, HPDQuery;

@interface SCTHelpItemGRL : SCTGRL {
    HPDResult *mSearchResult;
    HPDQuery *mHelpQuery;
}

- (id)imageTintColor;
- (void)dealloc;
- (void)perform;
- (id)initWithCategory:(id)a0;
- (id)init;
- (unsigned long long)imageScaling;
- (void)show;
- (id)initWithSearchResult:(id)a0 withQuery:(id)a1;
- (id)fullTitle;
- (BOOL)isShowAllItem;
- (id)localizedCategory;
- (id)representativeIconForSelectedState:(BOOL)a0;

@end
