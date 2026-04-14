@interface FPBoolean : NSObject {
    BOOL _value;
}

@property (readonly, nonatomic) BOOL value;

- (BOOL)isEqual:(id)a0;
- (id)initWithBool:(BOOL)a0;

@end
