@class NSString;

@interface DDBinderInfo : NSObject {
    NSString *_name;
    long long _score;
    id _value;
    int _valueType;
    BOOL _NLPToken;
}

@property BOOL topLevel;

- (void)dealloc;
- (id)description;
- (id)name;
- (id)initWithName:(id)a0;
- (long long)score;
- (void)setValue:(id)a0;
- (id)value;
- (void)setScore:(long long)a0;
- (int)valueType;
- (BOOL)isDummy;
- (BOOL)NLPToken;
- (id)monxmlAttributes;
- (void)setNLPToken:(BOOL)a0;
- (void)setValueType:(int)a0;

@end
