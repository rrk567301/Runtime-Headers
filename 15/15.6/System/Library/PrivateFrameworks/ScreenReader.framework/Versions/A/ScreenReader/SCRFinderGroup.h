@interface SCRFinderGroup : SCRGroup {
    unsigned long long _numOfAXChildren;
}

- (id)typeDescription;
- (void)setChildren:(id)a0;
- (id)_columnViewTextElementChild;
- (char)_containsListChildren;
- (char)_isFinderHeaderStyleIconView;
- (void)addItemDescriptionToRequest:(id)a0;
- (void)handleSelectionChange:(id)a0;
- (char)needToRebuildChildren;
- (char)performDefaultActionWithRequest:(id)a0 allowClick:(char)a1;
- (void)prepareBrailleItemDescriptionForRequest:(id)a0 hasBrailleFocus:(char)a1;

@end
