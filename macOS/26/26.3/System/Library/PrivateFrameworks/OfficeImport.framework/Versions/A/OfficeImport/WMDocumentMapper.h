@class WDDocument, NSString;

@interface WMDocumentMapper : CMDocumentMapper <CMMapperRoot> {
    NSString *mFileName;
}

@property (readonly) WDDocument *document;

- (id)archiver;
- (double)rightMargin;
- (void)setFileName:(id)a0;
- (id)backgroundColor;
- (double)leftMargin;
- (void).cxx_destruct;
- (double)topMargin;
- (double)bottomMargin;
- (id)fileName;
- (id)documentTitle;
- (int)defaultTabWidth;
- (id)blipAtIndex:(unsigned int)a0;
- (struct CGSize { double x0; double x1; })contentSizeForDevice;
- (BOOL)hasSessionBreakAtIndex:(unsigned long long)a0;
- (double)headerMargin;
- (void)mapDefaultCssStylesAt:(id)a0;
- (void)mapWithState:(id)a0;
- (struct CGSize { double x0; double x1; })pageSizeForDevice;
- (id)styleMatrix;

@end
