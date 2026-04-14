@class NSString, NSArray;

@interface MPSGraphExecutableShapedEntryPoint : MPSGraphObject <NSCopying>

@property (readonly) NSString *entryFunctionName;
@property (readonly) NSArray *shapedInputTypes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqualTo:(id)a0;
- (id)description;
- (id)initWithEntryFunctionName:(id)a0 inputTypes:(id)a1;
- (BOOL)isEqualToEntryPoint:(id)a0;

@end
