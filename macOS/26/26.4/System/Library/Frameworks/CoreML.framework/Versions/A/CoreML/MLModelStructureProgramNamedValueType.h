@class NSString, MLModelStructureProgramValueType;

@interface MLModelStructureProgramNamedValueType : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) MLModelStructureProgramValueType *type;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 type:(id)a1;
- (id)initWithMILNamedValueType:(const void *)a0;

@end
