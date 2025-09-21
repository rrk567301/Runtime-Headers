@class NSArray, NSString;

@interface SNNMILProgram : NSObject {
    struct shared_ptr<MIL::IRProgram> { struct IRProgram *__ptr_; struct __shared_weak_count *__cntrl_; } _program;
}

@property (readonly, nonatomic) NSArray *functionNames;
@property (readonly, nonatomic) NSString *milFilePath;
@property (readonly, nonatomic) BOOL isReferencingBlobFile;

+ (void)loadContentsOfURL:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;

- (id)functionWithName:(id)a0;
- (id)description;
- (id).cxx_construct;
- (void)writeToFile:(id)a0;
- (void).cxx_destruct;
- (id)initWithProgram:(struct unique_ptr<MIL::IRProgram, std::default_delete<MIL::IRProgram>> { struct IRProgram *x0; })a0;
- (id)initWithProgram:(struct unique_ptr<MIL::IRProgram, std::default_delete<MIL::IRProgram>> { struct IRProgram *x0; })a0 sourceFilePath:(id)a1;
- (struct shared_ptr<MIL::IRProgram> { struct IRProgram *x0; struct __shared_weak_count *x1; })milProgram;
- (id)serializeToProtobufWithError:(id *)a0;

@end
