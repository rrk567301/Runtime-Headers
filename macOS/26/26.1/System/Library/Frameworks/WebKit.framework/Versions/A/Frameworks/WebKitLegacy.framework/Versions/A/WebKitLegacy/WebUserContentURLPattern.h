@class WebUserContentURLPatternPrivate;

@interface WebUserContentURLPattern : NSObject {
    WebUserContentURLPatternPrivate *_private;
}

- (id)host;
- (id)scheme;
- (void)dealloc;
- (BOOL)matchesURL:(id)a0;
- (BOOL)isValid;
- (id)initWithPatternString:(id)a0;
- (BOOL)matchesSubdomains;

@end
