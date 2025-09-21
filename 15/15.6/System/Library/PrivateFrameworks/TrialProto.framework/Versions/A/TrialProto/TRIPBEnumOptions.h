@class NSMutableArray;

@interface TRIPBEnumOptions : TRIPBMessage

@property (nonatomic) char allowAlias;
@property (nonatomic) char hasAllowAlias;
@property (nonatomic) char deprecated;
@property (nonatomic) char hasDeprecated;
@property (retain, nonatomic) NSMutableArray *uninterpretedOptionArray;
@property (readonly, nonatomic) unsigned long long uninterpretedOptionArray_Count;

+ (id)descriptor;

@end
