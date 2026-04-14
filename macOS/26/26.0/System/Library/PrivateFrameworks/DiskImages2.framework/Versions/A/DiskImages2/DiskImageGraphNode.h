@class NSUUID, NSString, NSURL, NSArray, NSMutableDictionary, NSDictionary, NSMutableArray;

@interface DiskImageGraphNode : NSObject

@property (retain, nonatomic) NSString *tag;
@property (retain, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) NSUUID *parentUUID;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) NSMutableDictionary *pstackDict;
@property (retain, nonatomic) NSMutableArray *mutableChildren;
@property (retain, nonatomic) DiskImageGraphNode *parent;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) BOOL isCache;
@property (readonly, nonatomic) NSArray *children;

+ (id)GraphNodeWithDictionary:(id)a0 workDir:(id)a1 error:(id *)a2;
+ (BOOL)validateWithDictionary:(id)a0 error:(id *)a1;

- (id)toDictionary;
- (void).cxx_destruct;
- (id)getChildren;
- (BOOL)deleteImage;
- (void)addDecendantsToArray:(id)a0;
- (id)childrenInfoWithExtra:(BOOL)a0 error:(id *)a1;
- (id)getDescendants;
- (id)infoWithExtra:(BOOL)a0 error:(id *)a1;
- (id)initWithDictionary:(id)a0 workDir:(id)a1 error:(id *)a2;
- (id)initWithTag:(id)a0 UUID:(id)a1 parentNode:(id)a2 metadata:(id)a3 isCache:(BOOL)a4;
- (id)recursiveInfoWithExtra:(BOOL)a0 error:(id *)a1;
- (void)setIsCache:(BOOL)a0;
- (id)toDIShadowNode;
- (BOOL)validateAppendedImageWithInfo:(id)a0 error:(id *)a1;

@end
