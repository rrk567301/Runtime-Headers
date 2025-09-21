@class WebUserContentURLPatternPrivate;

@interface WebUserContentURLPattern : NSObject {
    WebUserContentURLPatternPrivate *_private;
}

- (void)dealloc;
- (char)isValid;
- (id)host;
- (id)scheme;
- (char)matchesURL:(id)a0;
- (id)initWithPatternString:(id)a0;
- (char)matchesSubdomains;

@end
