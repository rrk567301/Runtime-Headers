@class UXBarButtonItem, NSArray, NSProgressIndicator, KHExportConfiguration, UXLabel;

@interface KHUXExportViewController : UXViewController <KHPDFGeneratorDelegate>

@property (readonly, nonatomic) UXBarButtonItem *cancelButtonItem;
@property (readonly, nonatomic) UXBarButtonItem *doneButtonItem;
@property (readonly, nonatomic) UXLabel *infoLabel;
@property (readonly, nonatomic) NSProgressIndicator *progressIndicator;
@property double renderingTime;
@property char generatorStarted;
@property char generatorRunning;
@property char generatorCanceled;
@property (readonly, nonatomic) NSArray *projects;
@property (readonly, nonatomic) KHExportConfiguration *exportConfiguration;

- (void).cxx_destruct;
- (void)updateProgress:(double)a0;
- (void)cancel:(id)a0;
- (void)done:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(char)a0;
- (void)updateInfoLabel;
- (id)directoryURLForProject:(id)a0;
- (id)documentURLForProject:(id)a0;
- (void)generatorDidFinish;
- (id)initWithExportConfiguration:(id)a0 forProjects:(id)a1;
- (void)keepModalResponsive;
- (void)pdfProgress:(double)a0 page:(long long)a1 maxPage:(long long)a2 project:(id)a3;
- (char)pdfShouldAbort;
- (void)startGenerator;

@end
