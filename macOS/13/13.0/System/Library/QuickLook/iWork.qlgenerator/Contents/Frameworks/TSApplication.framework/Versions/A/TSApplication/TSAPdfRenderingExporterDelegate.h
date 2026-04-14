@class NSString, TSARenderingExporter;

@interface TSAPdfRenderingExporterDelegate : NSObject <TSARenderingExporterDelegate> {
    TSARenderingExporter *mRenderingExporter;
    NSString *mPassphraseOpen;
    NSString *mPassphrasePrintCopy;
    BOOL mRequireOpenPassword;
    BOOL mRequireCopyPassword;
    BOOL mRequirePrintPassword;
    int mRenderingQuality;
}

@property int taggingCondition;

- (void).cxx_destruct;
- (void)setup;
- (void)teardown;
- (void)setPassphrase:(id)a0 hint:(id)a1;
- (double)viewScale;
- (void)setPrintPassphrase:(id)a0 hint:(id)a1;
- (void)setCopyPassphrase:(id)a0 hint:(id)a1;
- (void)setRenderingQuality:(int)a0;
- (id)initWithRenderingExporter:(id)a0;
- (BOOL)validatePassphrases:(id *)a0;
- (struct CGContext { } *)newCGContextForURL:(id)a0;
- (void)releaseCGContext:(struct CGContext { } *)a0;
- (BOOL)supportsPaging;
- (BOOL)supportsRenderingQuality;
- (int)renderingQuality;

@end
