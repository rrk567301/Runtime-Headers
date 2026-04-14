@interface SCRWebImage : SCRImage

- (id)typeDescription;
- (BOOL)shouldMap;
- (id)fullNameDescription;
- (BOOL)shouldIncludeInItemChooser;
- (BOOL)isWebElement;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (id)captionDescriptionContainsUserLabel:(BOOL *)a0 containsAncestorLabel:(BOOL *)a1;
- (BOOL)toggleSingleSelectionWithRequest:(id)a0;
- (BOOL)shouldNavigate;
- (long long)brailleLineType;
- (id)_imageFileName;
- (BOOL)_shouldBeHidden;

@end
