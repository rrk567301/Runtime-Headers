@class HMApplicationData, NSUUID, _HMContext, HMMutableArray, NSString, NSArray, HMHome;

@interface HMServiceGroup : NSObject <HMFLogging, NSSecureCoding, HMObjectMerge, HMMutableApplicationDataContainer> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _HMContext *context;
@property (retain, nonatomic) HMMutableArray *currentServices;
@property (readonly, nonatomic) NSUUID *uuid;
@property (weak, nonatomic) HMHome *home;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *services;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSUUID *applicationDataIdentifier;
@property (retain, nonatomic) HMApplicationData *applicationData;

+ (id)logCategory;

- (void)setName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)assistantIdentifier;
- (id)initWithCoder:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)__configureWithContext:(id)a0 home:(id)a1;
- (void)_addOrRemove:(BOOL)a0 service:(id)a1 completionHandler:(id /* block */)a2;
- (void)_removeServices:(id)a0;
- (void)_unconfigure;
- (void)_updateName:(id)a0 completionHandler:(id /* block */)a1;
- (void)addService:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithName:(id)a0 uuid:(id)a1;
- (BOOL)mergeFromNewObject:(id)a0;
- (void)removeService:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateApplicationData:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateName:(id)a0 completionHandler:(id /* block */)a1;

@end
