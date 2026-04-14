@class NSString, NSColor, NSImage;

@interface NSTableViewRowAction : NSObject <NSCopying> {
    NSColor *_backgroundColor;
}

@property (readonly, nonatomic, getter=_handler) id /* block */ handler;
@property long long style;
@property (copy) NSString *title;
@property (copy) NSColor *backgroundColor;
@property (retain) NSImage *image;

+ (id)rowActionWithStyle:(long long)a0 title:(id)a1 handler:(id /* block */)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)_initWithStyle:(long long)a0 title:(id)a1 handler:(id /* block */)a2;

@end
