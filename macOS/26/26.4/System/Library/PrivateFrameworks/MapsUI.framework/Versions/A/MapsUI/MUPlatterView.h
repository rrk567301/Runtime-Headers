@class NSView;
@protocol MUPlatterViewStyleProviding;

@interface MUPlatterView : NSView {
    id<MUPlatterViewStyleProviding> _visualStyleProvider;
    BOOL _includeBackground;
}

@property (readonly, nonatomic) NSView *contentView;

- (id)initWithContentView:(id)a0;
- (void)_setup;
- (void).cxx_destruct;
- (id)init;
- (id)_createVisualStyleProvider;
- (id)initWithContentView:(id)a0 includeBackground:(BOOL)a1;

@end
