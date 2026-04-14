@class NSMutableSet;

@interface CoreDAVSupportedReportSetItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *supportedReports;

+ (id)copyParseRules;

- (void)addSupportedReport:(id)a0;
- (BOOL)supportsReportWithNameSpace:(id)a0 andName:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
