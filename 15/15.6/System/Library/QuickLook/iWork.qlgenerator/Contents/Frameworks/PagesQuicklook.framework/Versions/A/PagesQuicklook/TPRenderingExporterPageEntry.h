@interface TPRenderingExporterPageEntry : NSObject

@property (readonly, nonatomic) char isDocumentPage;
@property (nonatomic) unsigned long long documentPageIndex;
@property (nonatomic) unsigned long long commentOverflowPageIndex;
@property (nonatomic) unsigned long long firstAnnotationNumber;

- (id)description;

@end
