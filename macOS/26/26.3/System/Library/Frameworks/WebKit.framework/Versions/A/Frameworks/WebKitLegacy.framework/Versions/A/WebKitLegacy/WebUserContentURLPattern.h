@class WebUserContentURLPatternPrivate;

@interface WebUserContentURLPattern : NSObject {
    WebUserContentURLPatternPrivate *_private;
}

- (BOOL)matchesURL:(id)a0;
- (id)scheme;
- (id)host;
- (void)dealloc;
- (BOOL)isValid;
- (id)initWithPatternString:(id)a0;
- (BOOL)matchesSubdomains;

@end
