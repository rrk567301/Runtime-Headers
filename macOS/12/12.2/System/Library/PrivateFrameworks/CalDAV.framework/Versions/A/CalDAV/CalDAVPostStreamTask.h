@class NSString;

@interface CalDAVPostStreamTask : CoreDAVPostTask

@property (retain, nonatomic) NSString *previousScheduleTag;
@property (retain, nonatomic) NSString *filename;

- (void).cxx_destruct;
- (id)responseData;
- (id)additionalHeaderValues;
- (id)requestBody;
- (id)copyDefaultParserForContentType:(id)a0;
- (id)lossyAsciiFilename;
- (id)utf8PercentEscapedFilename;
- (id)requestBodyStream;

@end
