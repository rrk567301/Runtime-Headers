@class NSURL, NSImage;
@protocol QLPreviewItem;

@interface QLPreviewSchemeHandler : NSObject {
    id<QLPreviewItem> _item;
    NSImage *_icon;
    long long _iconInitializationToken;
}

@property (readonly) id<QLPreviewItem> previewItem;
@property (readonly) NSURL *URL;
@property (readonly) NSURL *launchURL;
@property (readonly) int seamlessOpeningSupport;
@property (readonly) NSImage *icon;

+ (void)initialize;
+ (void)registerHandlerClass:(Class)a0 forScheme:(id)a1;
+ (BOOL)isURLReachable:(id)a0;
+ (id)handlerForPreviewItem:(id)a0;
+ (id)_handlerForURL:(id)a0 item:(id)a1;
+ (id)_handlerForScheme:(id)a0 item:(id)a1;
+ (id)_handlerClassForURL:(id)a0;

- (void).cxx_destruct;
- (id)_getIcon;
- (struct CGImage { } *)createImageForMaximumSize:(struct CGSize { double x0; double x1; })a0 options:(struct __CFDictionary { } *)a1;
- (void)calculatePreviewURL:(id *)a0 previewData:(id *)a1 previewProperties:(id *)a2 previewType:(id *)a3;
- (id)initWithPreviewItem:(id)a0;
- (id)filteredControlsFromControls:(id)a0;
- (struct CGImage { } *)createImageFromIconForMaximumSize:(struct CGSize { double x0; double x1; })a0;

@end
