@class NSMutableArray;

@interface TRIPBMethodOptions : TRIPBMessage

@property (nonatomic) char deprecated;
@property (nonatomic) char hasDeprecated;
@property (nonatomic) int idempotencyLevel;
@property (nonatomic) char hasIdempotencyLevel;
@property (retain, nonatomic) NSMutableArray *uninterpretedOptionArray;
@property (readonly, nonatomic) unsigned long long uninterpretedOptionArray_Count;

+ (id)descriptor;

@end
