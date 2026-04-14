@class NSURL;

@interface CoreDAVHrefItem : CoreDAVLeafItem

@property (retain, nonatomic) NSURL *baseURL;
@property (nonatomic) int writeStyle;

- (void)write:(id)a0;
- (void)parserSuggestsBaseURL:(id)a0;
- (id)description;
- (id)init;
- (id)payloadAsFullURL;
- (id)initWithURL:(id)a0;
- (id)payloadAsOriginalURL;
- (id)initWithURL:(id)a0 baseURL:(id)a1;
- (void).cxx_destruct;

@end
