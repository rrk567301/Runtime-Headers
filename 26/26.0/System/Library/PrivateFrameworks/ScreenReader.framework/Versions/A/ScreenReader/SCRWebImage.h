@interface SCRWebImage : SCRImage

- (id)typeDescription;
- (BOOL)isWebElement;
- (BOOL)shouldMap;
- (BOOL)_shouldBeHidden;
- (long long)brailleLineType;
- (id)_imageFileName;
- (id)captionDescriptionContainsUserLabel:(BOOL *)a0 containsAncestorLabel:(BOOL *)a1;
- (id)fullNameDescription;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (BOOL)shouldIncludeInItemChooser;
- (BOOL)shouldNavigate;
- (BOOL)toggleSingleSelectionWithRequest:(id)a0;

@end
