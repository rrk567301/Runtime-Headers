@class NSString, NSUUID, NSURL, NSError, IXDataPromiseSeed;

@interface IXDataPromise : NSObject <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _ivarLock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) IXDataPromiseSeed *seed;
@property (readonly, nonatomic) Class seedClass;
@property (nonatomic, getter=isComplete) BOOL complete;
@property (nonatomic) double percentComplete;
@property (readonly, nonatomic) NSError *localError;
@property (readonly, nonatomic) BOOL localIsComplete;
@property (readonly, nonatomic) NSURL *preflightPath;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long creatorIdentifier;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) unsigned long long errorSourceIdentifier;
@property (readonly, nonatomic) unsigned long long totalBytesNeededOnDisk;
@property (readonly, nonatomic) NSError *errorOccurred;

+ (id)outstandingPromisesForCreator:(unsigned long long)a0;
+ (BOOL)promiseExists:(BOOL *)a0 withUUID:(id)a1 error:(id *)a2;

- (double)percentComplete;
- (void)dealloc;
- (BOOL)resetWithError:(id *)a0;
- (id)initWithSeed:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)name;
- (id)initWithCoder:(id)a0;
- (id)uniqueIdentifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)setPercentComplete:(double)a0;
- (BOOL)preflightWithError:(id *)a0;
- (void)resetWithCompletion:(id /* block */)a0;
- (BOOL)localIsComplete;
- (oneway void)_clientDelegate_didCancelWithError:(id)a0 client:(unsigned long long)a1;
- (oneway void)_clientDelegate_didComplete;
- (void)_updateInitWithSeed:(id)a0 notifyDaemon:(BOOL)a1;
- (void)cancelForReason:(id)a0 client:(unsigned long long)a1 completion:(id /* block */)a2;
- (BOOL)cancelForReason:(id)a0 client:(unsigned long long)a1 error:(id *)a2;
- (void)cancelForReason:(id)a0 completion:(id /* block */)a1;
- (BOOL)cancelForReason:(id)a0 error:(id *)a1;
- (unsigned long long)creatorIdentifier;
- (id)initWithName:(id)a0 client:(unsigned long long)a1 diskSpaceNeeded:(unsigned long long)a2;
- (id)localError;
- (id)preflightPath;
- (unsigned long long)totalBytesNeededOnDisk;

@end
