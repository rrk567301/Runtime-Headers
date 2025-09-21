@class NSSet, NSMutableArray, CoreDAVLeafItem;

@interface CoreDAVMultiStatusItem : CoreDAVItem

@property (readonly, nonatomic) NSSet *responses;
@property (retain, nonatomic) NSMutableArray *orderedResponses;
@property (retain, nonatomic) CoreDAVLeafItem *responseDescription;

+ (id)copyParseRules;

- (void)addResponse:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
