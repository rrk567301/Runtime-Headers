@class NSString;

@interface CalDAVPostStreamTask : CoreDAVPostTask

@property (retain, nonatomic) NSString *previousScheduleTag;
@property (retain, nonatomic) NSString *filename;

- (id)requestBody;
- (id)copyDefaultParserForContentType:(id)a0;
- (id)responseData;
- (void).cxx_destruct;
- (id)additionalHeaderValues;
- (id)lossyAsciiFilename;
- (id)requestBodyStream;
- (id)utf8PercentEscapedFilename;

@end
