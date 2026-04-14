@class WDDocument, NSString;

@interface WMDocumentMapper : CMDocumentMapper <CMMapperRoot> {
    NSString *mFileName;
}

@property (readonly) WDDocument *document;

- (void).cxx_destruct;
- (id)fileName;
- (void)setFileName:(id)a0;
- (double)topMargin;
- (double)leftMargin;
- (double)bottomMargin;
- (double)rightMargin;
- (id)documentTitle;
- (id)archiver;
- (id)styleMatrix;
- (id)blipAtIndex:(unsigned int)a0;
- (void)mapWithState:(id)a0;
- (double)headerMargin;
- (int)defaultTabWidth;
- (struct CGSize { double x0; double x1; })pageSizeForDevice;
- (struct CGSize { double x0; double x1; })contentSizeForDevice;
- (void)mapDefaultCssStylesAt:(id)a0;
- (BOOL)hasSessionBreakAtIndex:(unsigned long long)a0;

@end
