@class FPItem;

@interface FPUntrashOperation : FPTransformOperation {
    FPItem *_restoreDirectory;
}

@property (copy, nonatomic) id /* block */ untrashCompletionBlock;

- (void).cxx_destruct;
- (id)initWithItems:(id)a0 restoreDirectory:(id)a1;
- (void)presendNotifications;
- (id)fp_prettyDescription;
- (id)replicateForItems:(id)a0;
- (void)postStitchingFinishWithResult:(id)a0 error:(id)a1;
- (unsigned long long)transformItem:(id)a0 atIndex:(unsigned long long)a1;

@end
