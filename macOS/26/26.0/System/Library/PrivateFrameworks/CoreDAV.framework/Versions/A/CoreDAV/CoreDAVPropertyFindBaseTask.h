@class NSSet, CoreDAVMultiStatusItem;

@interface CoreDAVPropertyFindBaseTask : CoreDAVTask

@property (retain, nonatomic) NSSet *propertiesToFind;
@property (retain, nonatomic) CoreDAVMultiStatusItem *multiStatus;

- (void)updateMultiStatusFromResponse;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)getTotalFailureError;
- (id)parseHints;
- (id)copyDefaultParserForContentType:(id)a0;
- (id)initWithPropertiesToFind:(id)a0 atURL:(id)a1;
- (id)description;
- (id)successfulValueForNameSpace:(id)a0 elementName:(id)a1;
- (void).cxx_destruct;
- (id)additionalHeaderValues;

@end
