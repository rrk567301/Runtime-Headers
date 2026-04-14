@class NSString, GLUTMenu;

@interface GLUTMenuItem : NSObject {
    NSString *_title;
    GLUTMenu *_submenu;
    int _tag;
    BOOL _isTrigger;
}

- (void)setTag:(int)a0;
- (int)tag;
- (void)setMenu:(id)a0;
- (void)setTitle:(id)a0;
- (void)finalize;
- (id)menu;
- (void)dealloc;
- (id)title;
- (id)initWithTitle:(id)a0 menu:(id)a1;
- (id)initWithTitle:(id)a0 tag:(int)a1;
- (BOOL)isTrigger;

@end
