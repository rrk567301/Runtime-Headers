@class NSString, NSArray;

@interface MPSGraphExecutableShapedEntryPoint : MPSGraphObject <NSCopying>

@property (readonly) NSString *entryFunctionName;
@property (readonly) NSArray *shapedInputTypes;

- (BOOL)isEqualTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithEntryFunctionName:(id)a0 inputTypes:(id)a1;
- (BOOL)isEqualToEntryPoint:(id)a0;

@end
