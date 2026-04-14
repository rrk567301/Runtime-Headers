@class RVPopoverPresenter;

@interface RVTranslateMenuItem : RVMenuItem {
    long long _type;
    RVPopoverPresenter *_popoverPresenter;
}

+ (BOOL)_isServiceAvailableForItem:(id)a0 presentingContext:(id)a1;
+ (BOOL)isAvailableForItem:(id)a0 presentingContext:(id)a1;
+ (id)translateTextForItem:(id)a0;

- (id)image;
- (id)text;
- (void).cxx_destruct;
- (void)_rvMenuItemAction;
- (long long)tagForType;

@end
