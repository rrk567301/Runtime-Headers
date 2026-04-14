@class NSSet, NSString, NSURL, NSMutableSet, BSAtomicSignal;

@interface PFTemporaryResource : NSObject <BSInvalidatable> {
    NSMutableSet *_trackedInvalidatables;
    BSAtomicSignal *_invalidationSignal;
}

@property (readonly, nonatomic) id resource;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSSet *trackedState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (void)invalidateWithError:(out id *)a0;
- (void)dealloc;
- (void)invalidate;
- (id)init;
- (id)initWithResource:(id)a0;
- (void).cxx_destruct;
- (id)initWithResource:(id)a0 URL:(id)a1;
- (void)trackInvalidatable:(id)a0;

@end
