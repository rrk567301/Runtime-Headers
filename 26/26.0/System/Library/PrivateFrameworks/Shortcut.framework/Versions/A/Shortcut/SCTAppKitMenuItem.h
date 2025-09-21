@class NSMenu;

@interface SCTAppKitMenuItem : NSObject {
    NSMenu *_menu;
    long long _itemIndex;
}

@property (readonly) long long itemIndex;
@property (readonly) BOOL isVisible;

- (id)menu;
- (void)setMenu:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)validateItem;
- (id)initWithMenu:(id)a0 item:(long long)a1;

@end
