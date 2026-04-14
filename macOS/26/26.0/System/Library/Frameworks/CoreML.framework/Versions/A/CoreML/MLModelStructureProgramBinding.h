@class NSString, MLModelStructureProgramValue;

@interface MLModelStructureProgramBinding : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) MLModelStructureProgramValue *value;

- (id)initWithValue:(id)a0;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;

@end
