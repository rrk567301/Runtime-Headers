@interface KNObjectPlaceholderInfo : KNPlaceholderInfo

- (int)kind;
- (id)typeName;
- (Class)layoutClass;
- (Class)repClass;
- (BOOL)supportsHyperlinks;
- (BOOL)displaysInstructionalText;
- (id)instructionalText;
- (id)initWithKNPlaceholderInfo:(id)a0;
- (BOOL)canAddCaption;
- (BOOL)canRemoveCaption;
- (BOOL)canAddTitle;
- (BOOL)canRemoveTitle;

@end
