@class NSURL;

@interface CoreDAVHrefItem : CoreDAVLeafItem

@property (retain, nonatomic) NSURL *baseURL;
@property (nonatomic) int writeStyle;

- (id)payloadAsFullURL;
- (void)parserSuggestsBaseURL:(id)a0;
- (id)init;
- (id)description;
- (void)write:(id)a0;
- (id)payloadAsOriginalURL;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 baseURL:(id)a1;

@end
