@class NSArray, NSString;

@interface NUPipelinePath : NSObject

@property (class, readonly, nonatomic) NUPipelinePath *rootPath;
@property (class, readonly, nonatomic) NUPipelinePath *superPath;
@property (class, readonly, nonatomic) NUPipelinePath *currentPath;

@property (readonly, copy, nonatomic) NSArray *components;
@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, nonatomic) BOOL isAbsolute;
@property (readonly, nonatomic) BOOL isRelative;

+ (id)pathFromString:(id)a0;
+ (void)resolvePathComponents:(id)a0 into:(id)a1;

- (id)debugDescription;
- (id)init;
- (id)description;
- (BOOL)isEqualToPath:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPathComponents:(id)a0;
- (id)subpathFromString:(id)a0;
- (id)subpathWithPath:(id)a0;

@end
