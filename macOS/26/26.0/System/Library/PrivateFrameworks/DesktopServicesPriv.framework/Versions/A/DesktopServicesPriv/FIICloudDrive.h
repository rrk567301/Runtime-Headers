@class FINode;

@interface FIICloudDrive : FICompoundNode

@property (retain) FINode *_libraries;
@property (retain) FINode *_documents;

+ (struct pair<FINode *, FINode *> { id x0; id x1; })findUnderlyingNodes;

- (id)init;
- (void).cxx_destruct;
- (id)dropTargetNode;
- (id)fileOpNode;
- (unsigned int)nodePermissions:(unsigned int)a0 error:(id *)a1;
- (id)propertyAsNumber:(unsigned int)a0 async:(BOOL)a1 options:(unsigned int)a2 error:(id *)a3;
- (id)propertyAsString:(unsigned int)a0 async:(BOOL)a1 options:(unsigned int)a2 error:(id *)a3;

@end
