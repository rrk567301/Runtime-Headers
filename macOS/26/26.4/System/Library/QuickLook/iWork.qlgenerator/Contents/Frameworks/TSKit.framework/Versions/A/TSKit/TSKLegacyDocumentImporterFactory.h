@class NSString;

@interface TSKLegacyDocumentImporterFactory : NSObject <TSKDocumentImporterFactory>

@property (retain, nonatomic) Class importerClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithImporterClass:(Class)a0;
- (id)newImporterForURL:(id)a0;

@end
