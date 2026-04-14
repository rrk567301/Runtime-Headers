@class NSUUID, _HMContext, HMMutableArray, NSString, NSArray, HMHome;

@interface HMZone : NSObject <NSSecureCoding, HMObjectMerge> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _HMContext *context;
@property (retain, nonatomic) HMMutableArray *currentRooms;
@property (readonly, nonatomic) NSUUID *uuid;
@property (weak, nonatomic) HMHome *home;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *rooms;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (void)setUuid:(id)a0;
- (id)assistantIdentifier;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)__configureWithContext:(id)a0 home:(id)a1;
- (void)_addRoom:(id)a0 completionHandler:(id /* block */)a1;
- (void)_removeRoom:(id)a0;
- (void)_removeRoom:(id)a0 completionHandler:(id /* block */)a1;
- (void)_unconfigure;
- (void)_updateName:(id)a0 completionHandler:(id /* block */)a1;
- (void)addRoom:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithName:(id)a0 uuid:(id)a1;
- (BOOL)mergeFromNewObject:(id)a0;
- (void)removeRoom:(id)a0 completionHandler:(id /* block */)a1;
- (id)roomWithUUID:(id)a0;
- (void)updateName:(id)a0 completionHandler:(id /* block */)a1;

@end
