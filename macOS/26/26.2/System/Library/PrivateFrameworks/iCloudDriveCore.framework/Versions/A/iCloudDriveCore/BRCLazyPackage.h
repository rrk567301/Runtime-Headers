@class NSString, BRCStageRegistry, CKPackage, NSData;

@interface BRCLazyPackage : NSObject {
    BRCStageRegistry *_registry;
    NSString *_stageID;
    NSString *_name;
    CKPackage *_package;
    NSData *_boundaryKey;
}

- (void).cxx_destruct;
- (BOOL)addItem:(id)a0 error:(id *)a1;
- (unsigned long long)itemCount;
- (id)package;
- (id)initWithRegistry:(id)a0 stageID:(id)a1 name:(id)a2 boundaryKey:(id)a3;

@end
