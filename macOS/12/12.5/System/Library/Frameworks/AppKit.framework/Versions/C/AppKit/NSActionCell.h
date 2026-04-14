@interface NSActionCell : NSCell {
    long long _tag;
    SEL _action;
    id _target;
    id _controlView;
}

@property (weak) id target;
@property SEL action;
@property long long tag;

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)controlView;
- (void)setControlView:(id)a0;

@end
