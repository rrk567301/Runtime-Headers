@interface _PFActionLogStateChange : _PFActionLogEvent

@property (readonly) int oldStatus;
@property (readonly) int newStatus;

- (id)description;
- (id)initWithAction:(id)a0 oldStatus:(int)a1 newStatus:(int)a2;

@end
