@class NSString;

@interface CalDAVPostStreamTask : CoreDAVPostTask

@property (retain, nonatomic) NSString *previousScheduleTag;
@property (retain, nonatomic) NSString *filename;

- (id)requestBody;
- (id)responseData;
- (void).cxx_destruct;
- (id)copyDefaultParserForContentType:(id)a0;
- (id)additionalHeaderValues;
- (id)lossyAsciiFilename;
- (id)requestBodyStream;
- (id)utf8PercentEscapedFilename;

@end
