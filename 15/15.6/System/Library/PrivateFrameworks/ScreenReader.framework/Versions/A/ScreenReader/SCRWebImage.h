@interface SCRWebImage : SCRImage

- (id)typeDescription;
- (char)shouldMap;
- (long long)brailleLineType;
- (char)_shouldBeHidden;
- (id)_imageFileName;
- (id)captionDescriptionContainsUserLabel:(char *)a0 containsAncestorLabel:(char *)a1;
- (id)fullNameDescription;
- (char)isWebElement;
- (char)performDefaultActionWithRequest:(id)a0 allowClick:(char)a1;
- (char)shouldIncludeInItemChooser;
- (char)shouldNavigate;
- (char)toggleSingleSelectionWithRequest:(id)a0;

@end
