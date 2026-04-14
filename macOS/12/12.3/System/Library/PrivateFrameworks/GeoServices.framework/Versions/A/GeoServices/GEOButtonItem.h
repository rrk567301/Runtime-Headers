@class GEOPDButtonItem;

@interface GEOButtonItem : NSObject {
    GEOPDButtonItem *_buttonItem;
}

@property (readonly, nonatomic) int buttonType;

- (void).cxx_destruct;
- (id)initWithButtonItem:(id)a0;

@end
