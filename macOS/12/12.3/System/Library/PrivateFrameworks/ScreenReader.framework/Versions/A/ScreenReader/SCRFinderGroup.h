@interface SCRFinderGroup : SCRGroup {
    unsigned long long _numOfAXChildren;
}

- (id)typeDescription;
- (void)setChildren:(id)a0;
- (void)addItemDescriptionToRequest:(id)a0;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (void)prepareBrailleItemDescriptionForRequest:(id)a0 hasBrailleFocus:(BOOL)a1;
- (void)handleSelectionChange:(id)a0;
- (BOOL)needToRebuildChildren;
- (BOOL)_containsListChildren;
- (BOOL)_isFinderHeaderStyleIconView;
- (id)_columnViewTextElementChild;

@end
