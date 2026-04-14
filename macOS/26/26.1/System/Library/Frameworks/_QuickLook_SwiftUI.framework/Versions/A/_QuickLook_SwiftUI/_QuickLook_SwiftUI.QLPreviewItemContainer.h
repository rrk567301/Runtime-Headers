@class NSURL;

@interface _QuickLook_SwiftUI.QLPreviewItemContainer : NSObject <QLPreviewItem> {
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ didStartAccessingSecurityScopeResource;
}

@property (nonatomic, readonly) NSURL *previewItemURL;
@property (nonatomic, readonly) long long hash;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
