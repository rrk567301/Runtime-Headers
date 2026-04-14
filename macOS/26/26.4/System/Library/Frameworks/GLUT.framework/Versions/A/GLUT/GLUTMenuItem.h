@class NSString, GLUTMenu;

@interface GLUTMenuItem : NSObject {
    NSString *_title;
    GLUTMenu *_submenu;
    int _tag;
    BOOL _isTrigger;
}

- (id)menu;
- (void)finalize;
- (void)setTag:(int)a0;
- (void)setMenu:(id)a0;
- (void)setTitle:(id)a0;
- (int)tag;
- (id)title;
- (void)dealloc;
- (id)initWithTitle:(id)a0 menu:(id)a1;
- (id)initWithTitle:(id)a0 tag:(int)a1;
- (BOOL)isTrigger;

@end
