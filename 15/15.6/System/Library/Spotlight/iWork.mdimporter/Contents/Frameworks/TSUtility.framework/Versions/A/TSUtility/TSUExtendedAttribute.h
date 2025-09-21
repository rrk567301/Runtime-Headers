@class NSString, NSData;

@interface TSUExtendedAttribute : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSData *value;

+ (id)extendedAttributeFromPath:(id)a0 name:(id)a1 options:(int)a2 error:(id *)a3;
+ (id)extendedAttributeWithName:(id)a0 value:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 value:(id)a1;
- (id)initFromPath:(id)a0 name:(id)a1 options:(int)a2 error:(id *)a3;
- (id)initFromPathFileSystemRepresentation:(const char *)a0 name:(id)a1 forRemoval:(char)a2 options:(int)a3 error:(id *)a4;
- (char)setAttributeToPath:(id)a0 options:(int)a1 error:(id *)a2;
- (char)setAttributeToPathFileSystemRepresentation:(const char *)a0 options:(int)a1 error:(id *)a2;
- (char)shouldPreserveForIntent:(unsigned int)a0;

@end
