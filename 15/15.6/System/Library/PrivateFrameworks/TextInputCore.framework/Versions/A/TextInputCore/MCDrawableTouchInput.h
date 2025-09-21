@class NSArray;

@interface MCDrawableTouchInput : MCTouchInput

@property (readonly, nonatomic) struct RefPtr<TI::Favonius::CMTouchHistory> { struct CMTouchHistory *m_ptr; } touchHistory;
@property (readonly, nonatomic) char isInflectionPoint;
@property (readonly, nonatomic) NSArray *nearbyKeys;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithTouchPoint:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1 timestamp:(double)a2;
- (id)initWithTouchPoint:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1 timestamp:(double)a2 inflectionPoint:(char)a3 touchHistory:(const void *)a4;

@end
