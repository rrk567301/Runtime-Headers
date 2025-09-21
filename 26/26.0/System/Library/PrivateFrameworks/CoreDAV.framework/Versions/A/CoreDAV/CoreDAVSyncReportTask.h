@class NSString;

@interface CoreDAVSyncReportTask : CoreDAVPropertyFindBaseTask

@property (readonly, nonatomic) NSString *previousSyncToken;
@property (readonly, nonatomic) NSString *nextSyncToken;
@property (readonly, nonatomic) BOOL moreToSync;
@property (readonly, nonatomic) BOOL wasInvalidSyncToken;

- (id)requestBody;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)httpMethod;
- (id)copyDefaultParserForContentType:(id)a0;
- (id)notFoundHREFs;
- (id)description;
- (id)initWithPropertiesToFind:(id)a0 atURL:(id)a1 withDepth:(int)a2 previousSyncToken:(id)a3;
- (BOOL)hadUnexpectedChangeOfSyncTokenWithZeroResponses;
- (void).cxx_destruct;

@end
