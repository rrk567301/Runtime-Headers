@class NSUUID, NSDate, NSString, HMDHomeManager, NSPredicate, NSOperationQueue, NSDictionary, NSMutableSet;

@interface HMDBackgroundOperation : HMFObject <HMFLogging, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) NSPredicate *predicate;
@property (class, readonly) BOOL persistent;
@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) HMDHomeManager *homeManager;
@property (readonly) NSMutableSet *dependencies;
@property BOOL finished;
@property (readonly) NSDictionary *userData;
@property (readonly) NSDate *scheduledDate;
@property (readonly) NSDate *expirationDate;
@property (readonly, nonatomic) NSOperationQueue *queue;
@property (nonatomic) BOOL isReadyToRun;
@property (nonatomic) BOOL isExpired;
@property (readonly, nonatomic) NSUUID *operationUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)addDependency:(id)a0;
- (void)removeDependency:(id)a0;
- (BOOL)runOperation:(id)a0;
- (BOOL)hasDependency:(id)a0;
- (id)initWithUserData:(id)a0;
- (id)attributeDescriptions;
- (id)dumpState;
- (BOOL)mainWithError:(id *)a0;
- (id)AllDependencies;
- (id)initWithUUID:(id)a0 userData:(id)a1 scheduledDate:(id)a2 expirationDate:(id)a3 dependentOperations:(id)a4;
- (void)markOperationFinished;

@end
