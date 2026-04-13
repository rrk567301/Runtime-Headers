@interface CALRedBlackNode : NSObject {
    id _key;
    id _value;
}

+ (id)CALRedBlackNodeWithKey:(id)a0 value:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)value;
- (id)key;
- (id)initWithKey:(id)a0 value:(id)a1;

@end
