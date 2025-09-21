@class NSString, NSArray;

@interface MPSGraphExecutableEntryPoint : MPSGraphObject <NSCopying>

@property (readonly) NSString *entryFunctionName;
@property (readonly) NSArray *inputTypes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEqualTo:(id)a0;
- (id)initWithEntryFunctionName:(id)a0 inputTypes:(id)a1;
- (char)isEqualToEntryPoint:(id)a0;

@end
