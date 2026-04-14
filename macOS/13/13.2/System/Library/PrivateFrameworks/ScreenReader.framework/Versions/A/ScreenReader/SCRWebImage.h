@interface SCRWebImage : SCRImage

- (id)typeDescription;
- (BOOL)shouldMap;
- (id)fullNameDescription;
- (id)captionDescriptionContainsUserLabel:(BOOL *)a0 containsAncestorLabel:(BOOL *)a1;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (BOOL)toggleSingleSelectionWithRequest:(id)a0;
- (BOOL)shouldNavigate;
- (long long)brailleLineType;
- (BOOL)isWebElement;
- (BOOL)shouldIncludeInItemChooser;
- (id)_imageFileName;
- (BOOL)_shouldBeHidden;

@end
