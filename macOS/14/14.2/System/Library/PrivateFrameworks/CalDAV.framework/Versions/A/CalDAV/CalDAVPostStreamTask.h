@class NSString;

@interface CalDAVPostStreamTask : CoreDAVPostTask

@property (retain, nonatomic) NSString *previousScheduleTag;
@property (retain, nonatomic) NSString *filename;

- (void).cxx_destruct;
- (id)responseData;
- (id)additionalHeaderValues;
- (id)copyDefaultParserForContentType:(id)a0;
- (id)lossyAsciiFilename;
- (id)requestBody;
- (id)requestBodyStream;
- (id)utf8PercentEscapedFilename;

@end
