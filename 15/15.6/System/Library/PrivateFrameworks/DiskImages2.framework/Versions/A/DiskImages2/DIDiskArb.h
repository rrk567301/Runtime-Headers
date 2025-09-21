@class NSURL, NSArray, NSError;
@protocol DIDisappearedMountPointDelegate;

@interface DIDiskArb : NSObject

@property (nonatomic) struct __DASession { } *daSession;
@property (copy, nonatomic) NSURL *inputMountedOnURL;
@property (copy, nonatomic) NSArray *shadowMountedOnURLs;
@property char callbackReached;
@property (retain, nonatomic) NSError *operationError;
@property (weak, nonatomic) id<DIDisappearedMountPointDelegate> delegate;

+ (id)diskArbWithError:(id *)a0;

- (void).cxx_destruct;
- (id)initWithError:(id *)a0;
- (void)stop;
- (void)addDisappearedCallbackWithMountPoint:(id)a0 shadowMountPoints:(id)a1 delegate:(id)a2;
- (id)copyDescriptionWithBSDName:(id)a0;
- (char)ejectWithBSDName:(id)a0 error:(id *)a1;
- (char)mountWithDeviceName:(id)a0 args:(id)a1 filesystem:(id)a2 mountURL:(id)a3 error:(id *)a4;
- (void)onDiskDisappearedWithDisk:(struct __DADisk { } *)a0;
- (char)unmountWithMountPoint:(id)a0 error:(id *)a1;
- (char)waitForDAIdleWithError:(id *)a0;

@end
