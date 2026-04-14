@class NSView;

@interface SafeAreaView : NSView

@property (weak, nonatomic) NSView *header;
@property (weak, nonatomic) NSView *footer;

- (void)layout;
- (void).cxx_destruct;
- (id)initWithHeader:(id)a0 footer:(id)a1;

@end
