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

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)firstHref;
- (char)hasPropertyError;
- (id)successfulPropertiesToValues;
- (void)addHref:(id)a0;
- (void)addPropStat:(id)a0;

@end
