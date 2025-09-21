@class NSString, BRCStageRegistry, CKPackage, NSData;

@interface BRCLazyPackage : NSObject {
    BRCStageRegistry *_registry;
    NSString *_stageID;
    NSString *_name;
    CKPackage *_package;
    NSData *_boundaryKey;
}

- (id)package;
- (unsigned long long)itemCount;
- (BOOL)addItem:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithRegistry:(id)a0 stageID:(id)a1 name:(id)a2 boundaryKey:(id)a3;

@end
