@class HPDResult, HPDQuery;

@interface SCTHelpItemGRL : SCTGRL {
    HPDResult *mSearchResult;
    HPDQuery *mHelpQuery;
}

- (void)dealloc;
- (id)init;
- (void)perform;
- (unsigned long long)imageScaling;
- (void)show;
- (id)initWithCategory:(id)a0;
- (id)imageTintColor;
- (id)initWithSearchResult:(id)a0 withQuery:(id)a1;
- (id)fullTitle;
- (char)isShowAllItem;
- (id)localizedCategory;
- (id)representativeIconForSelectedState:(char)a0;

@end
