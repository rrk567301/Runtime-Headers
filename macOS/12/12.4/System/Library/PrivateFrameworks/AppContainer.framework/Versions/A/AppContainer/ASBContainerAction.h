@interface ASBContainerAction : NSObject

+ (id)actionMoveFrom:(id)a0 to:(id)a1;
+ (id)actionMoveContentsOf:(id)a0 to:(id)a1;
+ (id)actionSymlinkTo:(id)a0 as:(id)a1;
+ (id)actionUnlink:(id)a0;
+ (id)actionWithName:(id)a0 arguments:(id)a1 error:(id *)a2;

- (id)description;
- (BOOL)performWithContainer:(id)a0 usingFileManager:(id)a1 error:(id *)a2;

@end
