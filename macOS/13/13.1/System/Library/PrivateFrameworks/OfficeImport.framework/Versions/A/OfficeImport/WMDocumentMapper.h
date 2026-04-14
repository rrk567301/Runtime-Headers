@class WDDocument, NSString;

@interface WMDocumentMapper : CMDocumentMapper <CMMapperRoot> {
    NSString *mFileName;
}

@property (readonly) WDDocument *document;

- (void).cxx_destruct;
- (id)fileName;
- (void)setFileName:(id)a0;
- (double)leftMargin;
- (double)rightMargin;
- (double)topMargin;
- (double)bottomMargin;
- (id)documentTitle;
- (id)archiver;
- (id)blipAtIndex:(unsigned int)a0;
- (void)mapWithState:(id)a0;
- (id)styleMatrix;
- (double)headerMargin;
- (int)defaultTabWidth;
- (struct CGSize { double x0; double x1; })pageSizeForDevice;
- (void)mapDefaultCssStylesAt:(id)a0;
- (struct CGSize { double x0; double x1; })contentSizeForDevice;
- (BOOL)hasSessionBreakAtIndex:(unsigned long long)a0;

@end
