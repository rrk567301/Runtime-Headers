@class NSString;

@interface CalDAVPostStreamTask : CoreDAVPostTask

@property (retain, nonatomic) NSString *previousScheduleTag;
@property (retain, nonatomic) NSString *filename;

- (id)additionalHeaderValues;
- (id)responseData;
- (id)requestBody;
- (id)copyDefaultParserForContentType:(id)a0;
- (void).cxx_destruct;
- (id)lossyAsciiFilename;
- (id)requestBodyStream;
- (id)utf8PercentEscapedFilename;

@end
