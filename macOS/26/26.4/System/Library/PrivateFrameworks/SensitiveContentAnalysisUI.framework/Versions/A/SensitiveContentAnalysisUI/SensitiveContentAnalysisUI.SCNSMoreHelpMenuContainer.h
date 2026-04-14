@class NSDictionary, SCSensitivityAnalysis;

@interface SensitiveContentAnalysisUI.SCNSMoreHelpMenuContainer : NSObject <SCUIMoreHelpMenuController> {
    void /* function */ contextDictionary;
    void /* unknown type, empty encoding */ interventionType;
}

@property (nonatomic, readonly) NSDictionary *contextDictionary;
@property (nonatomic, readonly) long long options;
@property (nonatomic, readonly) SCSensitivityAnalysis *analysis;

- (void).cxx_destruct;
- (id)init;

@end
