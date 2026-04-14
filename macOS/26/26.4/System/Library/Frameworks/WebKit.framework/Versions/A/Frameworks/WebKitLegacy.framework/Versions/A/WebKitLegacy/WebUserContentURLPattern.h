@class WebUserContentURLPatternPrivate;

@interface WebUserContentURLPattern : NSObject {
    WebUserContentURLPatternPrivate *_private;
}

- (id)host;
- (BOOL)matchesURL:(id)a0;
- (BOOL)isValid;
- (id)scheme;
- (void)dealloc;
- (id)initWithPatternString:(id)a0;
- (BOOL)matchesSubdomains;

@end
