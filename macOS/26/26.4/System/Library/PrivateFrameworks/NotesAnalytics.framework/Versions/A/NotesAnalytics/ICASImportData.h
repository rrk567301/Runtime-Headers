@class NSString, NSArray;

@interface ICASImportData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;
@property (class, readonly, nonatomic) BOOL requiresTrackingConsent;

@property (readonly, nonatomic) NSArray *importSummary;


- (void).cxx_destruct;
- (id)toDict;
- (id)initWithImportSummary:(id)a0;

@end
