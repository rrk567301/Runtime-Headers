@class NSString, NSDictionary, AMSBagFrozenDataSource, NSDate, AMSProcessInfo;

@interface AMSSnapshotBag : NSObject <NSSecureCoding, AMSBagProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) AMSBagFrozenDataSource *dataSource;
@property (readonly, nonatomic) NSDictionary *dictionary;
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

- (id)integerForKey:(id)a0;
- (void)createSnapshotWithCompletion:(id /* block */)a0;
- (id)doubleForKey:(id)a0;
- (id)URLForKey:(id)a0 account:(id)a1;
- (id)compile;
- (id)URLForKey:(id)a0;
- (BOOL)isLoaded;
- (id)stringForKey:(id)a0;
- (id)boolForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (id)initWithData:(id)a0;
- (id)init;
- (id)_initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id)_initWithSnapshotBag:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
