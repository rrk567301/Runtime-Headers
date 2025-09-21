@class NSString, NSDictionary, NSMutableSet, NSData;

@interface CoreDAVBulkChangeTask : CoreDAVTask {
    NSString *_appSpecificNamespace;
    NSString *_appSpecificDataProp;
    NSString *_checkCTag;
    char _simple;
    char _returnChangedData;
    NSData *_pushedData;
    char _validCTag;
    NSString *_requestDataContentType;
}

@property (readonly, nonatomic) NSDictionary *uuidsToAddActions;
@property (readonly, nonatomic) NSDictionary *hrefsToModDeleteActions;
@property (readonly, nonatomic) NSString *nextCTag;
@property (readonly, nonatomic) NSMutableSet *bulkChangeResponses;

- (void).cxx_destruct;
- (id)requestBody;
- (id)httpMethod;
- (id)additionalHeaderValues;
- (id)copyDefaultParserForContentType:(id)a0;
- (void)fillOutDataWithUUIDsToAddActions:(id)a0 hrefsToModDeleteActions:(id)a1;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)initWithURL:(id)a0 checkCTag:(id)a1 simple:(char)a2 returnChangedData:(char)a3 uuidsToAddActions:(id)a4 hrefsToModDeleteActions:(id)a5;

@end
