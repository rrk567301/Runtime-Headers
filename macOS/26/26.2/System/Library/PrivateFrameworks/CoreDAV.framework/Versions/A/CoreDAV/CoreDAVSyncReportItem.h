@class NSString;

@interface CoreDAVSyncReportItem : CoreDAVMultiStatusItem

@property (readonly, nonatomic) NSString *syncToken;

+ (id)copyParseRules;

- (void)_setSyncTokenItem:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
