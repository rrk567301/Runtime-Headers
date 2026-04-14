@class NSMutableDictionary;

@interface ICNAInlineDrawingRecognitionReporter : ICNAObject

@property (retain, nonatomic) NSMutableDictionary *stagedReports;

+ (id)sharedReporter;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reportNotification:(id)a0;
- (void)createReportForDrawing:(id)a0 drawingID:(id)a1 insideNote:(id)a2;
- (void)submitReports;

@end
