@class NSString, SCROBrailleUIVisualRepresentation;

@interface SCROBrailleUIView : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) SCROBrailleUIVisualRepresentation *visualRepresentation;

+ (id)visibleView;
+ (void)dismissAll;

- (id)handleEvent:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void)display;
- (void)dismiss;
- (void).cxx_destruct;

@end
