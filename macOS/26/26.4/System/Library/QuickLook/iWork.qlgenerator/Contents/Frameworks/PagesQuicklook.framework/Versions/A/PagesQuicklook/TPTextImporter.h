@class NSString, NSURL, TSUProgressContext;

@interface TPTextImporter : NSObject <TSKDocumentImporter> {
    NSURL *mURL;
}

@property (retain, nonatomic) TSUProgressContext *progressContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)quit;
- (void)setURL:(id)a0;
- (id)initWithURL:(id)a0;
- (void)cancel;
- (void).cxx_destruct;
- (BOOL)importStartsWithThemeOnly;
- (BOOL)importToDocumentRoot:(id)a0 delegate:(id)a1 error:(id *)a2;
- (id)initialTemplateName;
- (BOOL)stylesheetUpdatesRequired;

@end
