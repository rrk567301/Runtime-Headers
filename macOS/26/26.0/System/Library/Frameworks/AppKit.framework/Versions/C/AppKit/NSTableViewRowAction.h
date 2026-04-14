@class NSString, NSImage, NSMenu, NSColor;

@interface NSTableViewRowAction : NSObject <NSCopying> {
    NSColor *_backgroundColor;
}

@property (readonly, nonatomic, getter=_handler) id /* block */ handler;
@property long long style;
@property (retain) NSMenu *menu;
@property BOOL allowsFullSwipe;
@property (copy) NSString *title;
@property (copy) NSColor *backgroundColor;
@property (retain) NSImage *image;

+ (id)rowActionWithStyle:(long long)a0 title:(id)a1 allowsFullSwipe:(BOOL)a2 handler:(id /* block */)a3;
+ (id)rowActionWithStyle:(long long)a0 title:(id)a1 handler:(id /* block */)a2;
+ (id)rowActionWithTitle:(id)a0 menu:(id)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithStyle:(long long)a0 title:(id)a1 allowsFullSwipe:(BOOL)a2 handler:(id /* block */)a3 menu:(id)a4;

@end
