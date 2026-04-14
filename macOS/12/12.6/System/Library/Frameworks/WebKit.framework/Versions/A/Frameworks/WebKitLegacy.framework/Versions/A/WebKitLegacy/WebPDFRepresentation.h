@class NSString;

@interface WebPDFRepresentation : NSObject <WebDocumentRepresentation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedMIMETypes;
+ (id)postScriptMIMETypes;
+ (Class)PDFDocumentClass;

- (id)title;
- (void)setDataSource:(id)a0;
- (void)finishedLoadingWithDataSource:(id)a0;
- (void)receivedData:(id)a0 withDataSource:(id)a1;
- (void)receivedError:(id)a0 withDataSource:(id)a1;
- (id)convertPostScriptDataSourceToPDF:(id)a0;
- (BOOL)canProvideDocumentSource;
- (id)documentSource;

@end
