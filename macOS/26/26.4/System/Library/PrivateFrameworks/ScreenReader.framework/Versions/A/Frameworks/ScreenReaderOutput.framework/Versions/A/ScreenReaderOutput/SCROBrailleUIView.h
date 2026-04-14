@class NSString, SCROBrailleUIVisualRepresentation;

@interface SCROBrailleUIView : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) SCROBrailleUIVisualRepresentation *visualRepresentation;

+ (id)visibleView;
+ (void)dismissAll;

- (void)display;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)handleEvent:(id)a0;
- (void)dismiss;

@end
