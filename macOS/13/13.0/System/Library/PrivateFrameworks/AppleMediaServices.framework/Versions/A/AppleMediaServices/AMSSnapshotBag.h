@class NSString, AMSBagFrozenDataSource, NSDate, AMSProcessInfo;

@interface AMSSnapshotBag : NSObject <NSSecureCoding, AMSBagProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) AMSBagFrozenDataSource *dataSource;
@property struct optional<AMSCore::Bag> { union { char __null_state_; struct Bag { void /* function */ **_vptr$ILoggable; struct shared_ptr<AMSCore::IBagDataSource> { struct IBagDataSource *__ptr_; struct __shared_weak_count *__cntrl_; } mDataSource; } __val_; } ; BOOL __engaged_; } underlyingBag;
@property (readonly) NSDate *creationDate;
@property (readonly, getter=isExpired) BOOL expired;
@property (readonly) NSDate *expirationDate;
@property (readonly, copy) NSString *profile;
@property (readonly, copy) NSString *profileVersion;
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)boolForKey:(id)a0;
- (id)URLForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (BOOL)isLoaded;
- (id)integerForKey:(id)a0;
- (id)doubleForKey:(id)a0;
- (id)compile;
- (void)createSnapshotWithCompletion:(id /* block */)a0;
- (id)URLForKey:(id)a0 account:(id)a1;
- (id)initWithBag:(struct Bag { void /* function */ **x0; struct shared_ptr<AMSCore::IBagDataSource> { struct IBagDataSource *x0; struct __shared_weak_count *x1; } x1; })a0;
- (id)_initWithDataSource:(id)a0;
- (id)_initWithSnapshotBag:(id)a0;

@end
