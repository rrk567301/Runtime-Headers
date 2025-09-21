@class TSUTemporaryDirectory, NSDictionary, NSURL, NSError;
@protocol TSKExporter;

@interface TSKit.TSKNonInteractiveExportContext : NSObject {
    void /* function */ options;
    void /* unknown type, empty encoding */ exportedDocumentURL;
}

@property (nonatomic, readonly) id<TSKExporter> exporter;
@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, retain) TSUTemporaryDirectory *temporaryDirectory;
@property (nonatomic, copy) NSURL *exportedDocumentURL;
@property (nonatomic, retain) NSError *error;

- (id)init;
- (void).cxx_destruct;
- (id)initWithExporter:(id)a0 options:(id)a1;

@end
