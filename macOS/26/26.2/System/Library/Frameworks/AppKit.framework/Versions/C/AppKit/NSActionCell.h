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

- (id)controlView;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)setControlView:(id)a0;

@end
