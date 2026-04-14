@class WebUserContentURLPatternPrivate;

@interface WebUserContentURLPattern : NSObject {
    WebUserContentURLPatternPrivate *_private;
}

- (void)dealloc;
- (BOOL)isValid;
- (id)scheme;
- (id)host;
- (id)initWithPatternString:(id)a0;
- (BOOL)matchesSubdomains;
- (BOOL)matchesURL:(id)a0;

@end
