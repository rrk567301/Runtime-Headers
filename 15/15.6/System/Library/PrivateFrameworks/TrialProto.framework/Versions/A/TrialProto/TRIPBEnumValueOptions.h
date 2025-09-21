@class NSMutableArray;

@interface TRIPBEnumValueOptions : TRIPBMessage

@property (nonatomic) char deprecated;
@property (nonatomic) char hasDeprecated;
@property (retain, nonatomic) NSMutableArray *uninterpretedOptionArray;
@property (readonly, nonatomic) unsigned long long uninterpretedOptionArray_Count;

+ (id)descriptor;

@end
