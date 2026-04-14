@class NSURL;

@interface CoreDAVHrefItem : CoreDAVLeafItem

@property (retain, nonatomic) NSURL *baseURL;
@property (nonatomic) int writeStyle;

- (void)write:(id)a0;
- (id)payloadAsOriginalURL;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)parserSuggestsBaseURL:(id)a0;
- (id)description;
- (id)initWithURL:(id)a0 baseURL:(id)a1;
- (id)payloadAsFullURL;
- (id)init;

@end
