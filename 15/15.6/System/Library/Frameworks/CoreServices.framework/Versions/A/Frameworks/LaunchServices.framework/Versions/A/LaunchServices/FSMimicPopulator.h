@class FSMimic, FSNode;

@interface FSMimicPopulator : NSObject {
    FSNode *_node;
}

@property (readonly, nonatomic) FSMimic *mimic;

- (void).cxx_destruct;
- (id)initWithNode:(id)a0;
- (char)populateHFSTypeAndCreatorWithError:(id *)a0;
- (void)populateHasChildNodeWithRelativePath:(id)a0;
- (char)populateSimpleSelector:(SEL)a0 error:(id *)a1;
- (char)populateValueForKey:(id)a0 error:(id *)a1;

@end
