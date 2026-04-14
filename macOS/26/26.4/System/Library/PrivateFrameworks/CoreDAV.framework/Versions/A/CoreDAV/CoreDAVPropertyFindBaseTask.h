@class NSSet, CoreDAVMultiStatusItem;

@interface CoreDAVPropertyFindBaseTask : CoreDAVTask

@property (retain, nonatomic) NSSet *propertiesToFind;
@property (retain, nonatomic) CoreDAVMultiStatusItem *multiStatus;

- (id)additionalHeaderValues;
- (id)initWithPropertiesToFind:(id)a0 atURL:(id)a1;
- (void)updateMultiStatusFromResponse;
- (id)getTotalFailureError;
- (id)successfulValueForNameSpace:(id)a0 elementName:(id)a1;
- (id)parseHints;
- (id)copyDefaultParserForContentType:(id)a0;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
