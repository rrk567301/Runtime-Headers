@class DOMStyleSheet;

@interface DOMObject : WebScriptObject <NSCopying> {
    struct DOMObjectInternal { } *_internal;
}

@property (readonly) DOMStyleSheet *sheet;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)dealloc;

@end
