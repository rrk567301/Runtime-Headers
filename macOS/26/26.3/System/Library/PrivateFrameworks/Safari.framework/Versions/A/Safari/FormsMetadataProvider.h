@class NSArray, NSString;

@interface FormsMetadataProvider : NSObject <WBSFormsMetadataProvider> {
    struct vector<OpaqueFormAutoFillFrame *, std::allocator<OpaqueFormAutoFillFrame *>> { struct OpaqueFormAutoFillFrame **__begin_; struct OpaqueFormAutoFillFrame **__end_; struct { struct OpaqueFormAutoFillFrame **__cap_; } ; } _frames;
    NSArray *_frameHandles;
}

@property (readonly, copy, nonatomic) NSArray *formsMetadata;
@property (readonly, nonatomic) unsigned long long formCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)enumerateFormsAndFramesUsingBlock:(id /* block */)a0;
- (void)enumerateFormsUsingBlock:(id /* block */)a0;
- (id)initWithWKFrames:(const void *)a0 metadataForAllForms:(const void *)a1;
- (id)initWithWebKitFrameHandles:(id)a0 metadata:(id)a1;
- (id)initWithWebKitFrames:(id)a0 metadata:(id)a1;
- (void)replaceFormsMetadataUsingBlock:(id /* block */)a0 completionHandler:(id /* block */)a1;

@end
