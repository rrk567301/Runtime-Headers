@class CoreDAVItemWithHrefChildItem, CoreDAVMatchResultsItem, NSMutableSet, CoreDAVErrorItem, NSMutableArray, CoreDAVLeafItem;

@interface CoreDAVResponseItem : CoreDAVItem

@property (retain, nonatomic) NSMutableArray *hrefs;
@property (retain, nonatomic) CoreDAVLeafItem *status;
@property (retain, nonatomic) NSMutableSet *propStats;
@property (retain, nonatomic) CoreDAVErrorItem *errorItem;
@property (retain, nonatomic) CoreDAVLeafItem *responseDescription;
@property (retain, nonatomic) CoreDAVItemWithHrefChildItem *location;
@property (retain, nonatomic) CoreDAVLeafItem *serverUID;
@property (retain, nonatomic) CoreDAVMatchResultsItem *matchResults;

+ (id)copyParseRules;

- (id)successfulPropertiesToValues;
- (id)firstHref;
- (BOOL)hasPropertyError;
- (void).cxx_destruct;
- (id)description;
- (void)addHref:(id)a0;
- (id)init;
- (void)addPropStat:(id)a0;

@end
