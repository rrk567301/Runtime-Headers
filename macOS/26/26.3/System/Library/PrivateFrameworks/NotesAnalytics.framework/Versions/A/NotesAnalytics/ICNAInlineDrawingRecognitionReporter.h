@class NSMutableDictionary;

@interface ICNAInlineDrawingRecognitionReporter : ICNAObject

@property (retain, nonatomic) NSMutableDictionary *stagedReports;

+ (id)sharedReporter;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)analyticsSessionWillEnd:(id)a0;
- (void)submitReportsWithEventReporter:(id)a0;
- (void)createReportForDrawing:(id)a0 drawingID:(id)a1 attachment:(id)a2 insideNote:(id)a3;
- (void)reportNotification:(id)a0;

@end
