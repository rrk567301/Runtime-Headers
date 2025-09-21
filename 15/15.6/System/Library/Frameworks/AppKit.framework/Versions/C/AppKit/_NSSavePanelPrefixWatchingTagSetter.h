@class NSURL, NSString;

@interface _NSSavePanelPrefixWatchingTagSetter : _NSSavePanelTagSetter {
    NSURL *directoryURL;
    NSString *prefix;
}

- (void)dealloc;
- (char)_isRelevantURL:(id)a0;
- (id)_URLForDirectoryToWatch;
- (char)_checkAndSetTagsForURL:(id)a0 usingAttributeCache:(char)a1;
- (void)_enumerateURLsUsingBlock:(id /* block */)a0;
- (id)_initWithDirectoryURL:(id)a0 useSecurityScopedURL:(char)a1 prefix:(id)a2 tagNames:(id)a3;

@end
