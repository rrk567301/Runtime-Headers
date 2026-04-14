@class SEMSandbox;

@interface CKVocabularySandbox : NSObject

@property (readonly, nonatomic) SEMSandbox *sandbox;

+ (id)loadWithSandboxId:(id)a0 error:(id *)a1;
+ (id)sandboxWithProfile:(id)a0 locale:(id)a1 error:(id *)a2;
+ (id)sandboxWithRawSpeechProfile:(id)a0 error:(id *)a1;
+ (id)sandboxWithRawSpeechProfile:(id)a0 rawSpeechProfileMetadata:(id)a1 error:(id *)a2;

- (id)save;
- (void)reset;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSandbox:(id)a0;
- (id)sandboxId;
- (id)searcher;
- (id)searcherForUserId:(id)a0;

@end
