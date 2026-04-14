@class WebUserContentURLPatternPrivate;

@interface WebUserContentURLPattern : NSObject {
    WebUserContentURLPatternPrivate *_private;
}

- (id)host;
- (id)scheme;
- (BOOL)matchesURL:(id)a0;
- (BOOL)isValid;
- (void)dealloc;
- (id)initWithPatternString:(id)a0;
- (BOOL)matchesSubdomains;

@end
