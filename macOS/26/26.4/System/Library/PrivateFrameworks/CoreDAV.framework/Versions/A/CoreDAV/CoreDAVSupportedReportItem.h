@class CoreDAVItem;

@interface CoreDAVSupportedReportItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItem *report;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
