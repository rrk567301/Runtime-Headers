@class NSString, TSUProgress;

@interface KNPdfSlideExporter : KNSlideExporter <TSKEncryptedDocumentExporter>

@property (readonly, nonatomic) char isCancelled;
@property (readonly, nonatomic) TSUProgress *progress;
@property (readonly, nonatomic) char needsSupplementalFiles;
@property (copy, nonatomic) NSString *typeUTI;
@property (readonly, nonatomic) NSString *savePanelMessage;
@property (readonly, nonatomic) NSString *documentSpecificTypeUTI;
@property (readonly, nonatomic) char isExportSupported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPassphrase:(id)a0 hint:(id)a1;
- (void)setCopyPassphrase:(id)a0 hint:(id)a1;
- (void)setPrintPassphrase:(id)a0 hint:(id)a1;
- (id)p_renderingExporterDelegate;
- (char)validatePassphrases:(id *)a0;

@end
