@interface KNObjectPlaceholderInfo : KNPlaceholderInfo

- (int)kind;
- (id)typeName;
- (Class)layoutClass;
- (Class)repClass;
- (char)displaysInstructionalText;
- (id)instructionalText;
- (char)supportsHyperlinks;
- (char)canAddCaption;
- (char)canAddTitle;
- (char)canRemoveCaption;
- (char)canRemoveTitle;
- (id)initWithKNPlaceholderInfo:(id)a0;

@end
