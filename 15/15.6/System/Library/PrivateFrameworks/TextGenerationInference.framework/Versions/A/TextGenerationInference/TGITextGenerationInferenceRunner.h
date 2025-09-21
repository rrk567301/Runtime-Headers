@class NSUUID, NSString, TGTextGenerationOperation, TGITextGenerationInferenceSession, NSObject;
@protocol OS_dispatch_queue;

@interface TGITextGenerationInferenceRunner : NSObject <TGITextGenerationInferenceRunner>

@property char shouldDoCacheLookUp;
@property (getter=isCanceled) char canceled;
@property (readonly) struct shared_ptr<TGITextGenerationInferenceDecodingPolicy> { struct TGITextGenerationInferenceDecodingPolicy *__ptr_; struct __shared_weak_count *__cntrl_; } decodingPolicy;
@property (readonly, copy) TGTextGenerationOperation *operation;
@property (readonly, copy) NSUUID *executionUUID;
@property (readonly) TGITextGenerationInferenceSession *session;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property struct shared_ptr<TGITextGenerationInferenceModelInterface> { struct TGITextGenerationInferenceModelInterface *__ptr_; struct __shared_weak_count *__cntrl_; } model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)run;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)cancel;
- (id)initWithQueue:(id)a0 executionUUID:(id)a1 operation:(id)a2 session:(id)a3;
- (struct TGITextGenerationInferenceWordFragment { int x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char x0 : 1; unsigned char x1 : 7; } x0; char x1[0]; char x2[23]; } x0; struct __long { struct { unsigned char x0 : 1; unsigned long x1 : 63; } x0; unsigned long long x1; char *x2; } x1; } x0; } x0; } x1; })runIncrementalInferenceWithTokenIDs:(const void *)a0;

@end
