@class NSSet, CoreDAVMultiStatusItem;

@interface CoreDAVPropertyFindBaseTask : CoreDAVTask

@property (retain, nonatomic) NSSet *propertiesToFind;
@property (retain, nonatomic) CoreDAVMultiStatusItem *multiStatus;

- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)getTotalFailureError;
- (void)updateMultiStatusFromResponse;
- (id)parseHints;
- (id)initWithPropertiesToFind:(id)a0 atURL:(id)a1;
- (id)successfulValueForNameSpace:(id)a0 elementName:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)copyDefaultParserForContentType:(id)a0;
- (id)additionalHeaderValues;

@end
