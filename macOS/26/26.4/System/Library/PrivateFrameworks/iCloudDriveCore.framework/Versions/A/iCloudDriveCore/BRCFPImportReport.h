@class NSError, FPImportProgressReport;

@interface BRCFPImportReport : NSObject

@property (copy, nonatomic) NSError *importError;
@property (retain, nonatomic) FPImportProgressReport *fpReport;

- (void).cxx_destruct;
- (id)init;

@end
