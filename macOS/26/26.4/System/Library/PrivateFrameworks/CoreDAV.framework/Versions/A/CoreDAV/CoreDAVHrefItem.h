@class NSURL;

@interface CoreDAVHrefItem : CoreDAVLeafItem

@property (retain, nonatomic) NSURL *baseURL;
@property (nonatomic) int writeStyle;

- (void)write:(id)a0;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)parserSuggestsBaseURL:(id)a0;
- (id)description;
- (id)payloadAsOriginalURL;
- (id)payloadAsFullURL;
- (id)initWithURL:(id)a0 baseURL:(id)a1;

@end
