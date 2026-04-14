@class NSURL, NSString, NSImage;

@interface _NSRecentDocumentInfo : NSObject <NSRecentDocumentInfo> {
    BOOL ownsSecurityScope;
}

@property (readonly) struct OpaqueLSSharedFileListItemRef { } *sharedFileListItem;
@property (retain) NSURL *resolvedURL;
@property (readonly) NSURL *originalURL;
@property (retain) NSString *displayName;
@property (retain) NSImage *icon;
@property (copy) id /* block */ deletionBlock;
@property long long state;
@property (readonly) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithSharedFileListItem:(struct OpaqueLSSharedFileListItemRef { } *)a0;
- (void)resolveByMountingVolumesIfNecessary:(BOOL)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (void)transferSecurityScope;
- (void)resolveURLWithCompletionHandler:(id /* block */)a0;

@end
