@interface TSWPApplicationDelegate : TSCKApplicationDelegate

@property (nonatomic) BOOL writingToolsWereInitiated;
@property (retain, nonatomic) id writingToolsNotificationToken;
@property (readonly, nonatomic) BOOL showChineseNamedPointSizes;

- (void).cxx_destruct;
- (id)defaultHyperlinkURL;
- (id)equationEditorAPDID;
- (BOOL)isValidURLForImportedHyperlink:(id)a0 targetDocumentRoot:(id)a1 forCrossDocumentPaste:(BOOL)a2;
- (void)didCloseWritingTools;
- (void)p_stopWTPopoverObservation;
- (void)willShowWritingTools;

@end
