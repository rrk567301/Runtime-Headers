@class NSString;

@interface CoreDAVSyncReportTask : CoreDAVPropertyFindBaseTask

@property (readonly, nonatomic) NSString *previousSyncToken;
@property (readonly, nonatomic) NSString *nextSyncToken;
@property (readonly, nonatomic) char moreToSync;
@property (readonly, nonatomic) char wasInvalidSyncToken;

- (id)description;
- (void).cxx_destruct;
- (id)requestBody;
- (id)httpMethod;
- (id)copyDefaultParserForContentType:(id)a0;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)initWithPropertiesToFind:(id)a0 atURL:(id)a1 withDepth:(int)a2 previousSyncToken:(id)a3;
- (char)hadUnexpectedChangeOfSyncTokenWithZeroResponses;
- (id)notFoundHREFs;

@end
