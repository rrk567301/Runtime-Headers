@class NSString, NSMutableArray;

@interface TRICustomPredicate : TRIPBMessage

@property (copy, nonatomic) NSString *key;
@property (nonatomic) char hasKey;
@property (nonatomic) int keyType;
@property (nonatomic) char hasKeyType;
@property (nonatomic) int operation;
@property (nonatomic) char hasOperation;
@property (retain, nonatomic) NSMutableArray *operandArray;
@property (readonly, nonatomic) unsigned long long operandArray_Count;

+ (id)descriptor;

@end
