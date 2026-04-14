@class NSSet, CoreDAVMultiStatusItem;

@interface CoreDAVPropertyFindBaseTask : CoreDAVTask

@property (retain, nonatomic) NSSet *propertiesToFind;
@property (retain, nonatomic) CoreDAVMultiStatusItem *multiStatus;

- (void)updateMultiStatusFromResponse;
- (id)parseHints;
- (id)additionalHeaderValues;
- (id)initWithPropertiesToFind:(id)a0 atURL:(id)a1;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)copyDefaultParserForContentType:(id)a0;
- (id)successfulValueForNameSpace:(id)a0 elementName:(id)a1;
- (id)getTotalFailureError;
- (id)description;
- (void).cxx_destruct;

@end
