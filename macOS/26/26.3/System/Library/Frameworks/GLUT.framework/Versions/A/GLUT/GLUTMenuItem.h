@class NSString, GLUTMenu;

@interface GLUTMenuItem : NSObject {
    NSString *_title;
    GLUTMenu *_submenu;
    int _tag;
    BOOL _isTrigger;
}

- (void)finalize;
- (int)tag;
- (void)setTag:(int)a0;
- (void)setMenu:(id)a0;
- (id)title;
- (void)dealloc;
- (void)setTitle:(id)a0;
- (id)menu;
- (id)initWithTitle:(id)a0 menu:(id)a1;
- (id)initWithTitle:(id)a0 tag:(int)a1;
- (BOOL)isTrigger;

@end
