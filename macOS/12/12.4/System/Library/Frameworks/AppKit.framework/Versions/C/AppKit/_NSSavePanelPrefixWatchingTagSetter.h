@class NSURL, NSString;

@interface _NSSavePanelPrefixWatchingTagSetter : _NSSavePanelTagSetter {
    NSURL *directoryURL;
    NSString *prefix;
}

- (void)dealloc;
- (id)_initWithDirectoryURL:(id)a0 useSecurityScopedURL:(BOOL)a1 prefix:(id)a2 tagNames:(id)a3;
- (BOOL)_isRelevantURL:(id)a0;
- (void)_enumerateURLsUsingBlock:(id /* block */)a0;
- (BOOL)_checkAndSetTagsForURL:(id)a0 usingAttributeCache:(BOOL)a1;
- (id)_URLForDirectoryToWatch;

@end
