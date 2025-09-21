@interface RWIProtocolRuntimeTypeSet : RWIProtocolJSONObject

@property (nonatomic) char isFunction;
@property (nonatomic) char isUndefined;
@property (nonatomic) char isNull;
@property (nonatomic) char isBoolean;
@property (nonatomic) char isInteger;
@property (nonatomic) char isNumber;
@property (nonatomic) char isString;
@property (nonatomic) char isObject;
@property (nonatomic) char isSymbol;
@property (nonatomic) char isBigInt;

- (id)initWithIsFunction:(char)a0 isUndefined:(char)a1 isNull:(char)a2 isBoolean:(char)a3 isInteger:(char)a4 isNumber:(char)a5 isString:(char)a6 isObject:(char)a7 isSymbol:(char)a8 isBigInt:(char)a9;

@end
