@interface FPBoolean : NSObject {
    BOOL _value;
}

@property (readonly, nonatomic) BOOL value;

- (id)initWithBool:(BOOL)a0;
- (BOOL)isEqual:(id)a0;

@end
