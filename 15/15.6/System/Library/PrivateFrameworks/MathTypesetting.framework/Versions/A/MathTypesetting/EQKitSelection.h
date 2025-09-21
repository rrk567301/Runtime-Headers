@class EQKitBox;

@interface EQKitSelection : NSObject

@property (readonly, nonatomic) EQKitBox *box;

- (char)isEqual:(id)a0;
- (char)containsBox:(id)a0;
- (id)initWithBox:(id)a0;
- (id)initWithInspectable:(id)a0;
- (id)inspectables;

@end
