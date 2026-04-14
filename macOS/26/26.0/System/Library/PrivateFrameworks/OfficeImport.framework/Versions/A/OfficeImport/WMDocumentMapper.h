@class WDDocument, NSString;

@interface WMDocumentMapper : CMDocumentMapper <CMMapperRoot> {
    NSString *mFileName;
}

@property (readonly) WDDocument *document;

- (id)fileName;
- (id)archiver;
- (id)backgroundColor;
- (double)leftMargin;
- (double)topMargin;
- (void)setFileName:(id)a0;
- (double)bottomMargin;
- (double)rightMargin;
- (void).cxx_destruct;
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
