@class NSString;

@interface CloudKitCode.BoxedCKMergeable : NSObject <CKMergeable> {
    void /* unknown type, empty encoding */ mergeable;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)init;
- (BOOL)mergeDeltas:(id)a0 error:(id *)a1;
- (id)mergeableDeltasForMetadata:(id)a0 error:(id *)a1;

@end
