@class NSMutableArray;

@interface TRIPBFieldOptions : TRIPBMessage

@property (nonatomic) int ctype;
@property (nonatomic) char hasCtype;
@property (nonatomic) char packed;
@property (nonatomic) char hasPacked;
@property (nonatomic) int jstype;
@property (nonatomic) char hasJstype;
@property (nonatomic) char lazy;
@property (nonatomic) char hasLazy;
@property (nonatomic) char deprecated;
@property (nonatomic) char hasDeprecated;
@property (nonatomic) char weak;
@property (nonatomic) char hasWeak;
@property (retain, nonatomic) NSMutableArray *uninterpretedOptionArray;
@property (readonly, nonatomic) unsigned long long uninterpretedOptionArray_Count;

+ (id)descriptor;

@end
