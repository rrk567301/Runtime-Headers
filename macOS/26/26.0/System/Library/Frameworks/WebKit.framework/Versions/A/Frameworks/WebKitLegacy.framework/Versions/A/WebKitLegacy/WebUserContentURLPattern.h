@class WebUserContentURLPatternPrivate;

@interface WebUserContentURLPattern : NSObject {
    WebUserContentURLPatternPrivate *_private;
}

- (BOOL)isValid;
- (id)scheme;
- (BOOL)matchesURL:(id)a0;
- (void)dealloc;
- (id)host;
- (id)initWithPatternString:(id)a0;
- (BOOL)matchesSubdomains;

@end
