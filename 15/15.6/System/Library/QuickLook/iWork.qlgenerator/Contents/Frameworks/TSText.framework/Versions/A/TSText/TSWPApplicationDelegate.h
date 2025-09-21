@interface TSWPApplicationDelegate : TSCKApplicationDelegate

@property (readonly, nonatomic) char showChineseNamedPointSizes;

- (id)defaultHyperlinkURL;
- (id)equationEditorAPDID;
- (char)isValidURLForImportedHyperlink:(id)a0 targetDocumentRoot:(id)a1 forCrossDocumentPaste:(char)a2;

@end
