@class NSURL;

@interface CoreDAVHrefItem : CoreDAVLeafItem

@property (retain, nonatomic) NSURL *baseURL;
@property (nonatomic) int writeStyle;

- (id)description;
- (id)init;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)write:(id)a0;
- (id)payloadAsOriginalURL;
- (id)payloadAsFullURL;
- (void)parserSuggestsBaseURL:(id)a0;
- (id)initWithURL:(id)a0 baseURL:(id)a1;

@end
