@class AMSSnapshotBag, NSString, NSDate, AMSProcessInfo, NSError;

@interface JetCore.AMSKitAMSBag : NSObject <AMSBagProtocol> {
    void /* unknown type, empty encoding */ amsKitBag;
    void /* function */ profile;
    void /* function */ profileVersion;
    void /* unknown type, empty encoding */ $__lazy_storage_$_amsBag;
}

@property (nonatomic, readonly) BOOL expired;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) NSString *profile;
@property (nonatomic, readonly) NSString *profileVersion;
@property (nonatomic, readonly) AMSProcessInfo *processInfo;

- (id)integerForKey:(id)a0;
- (void)createSnapshotWithCompletion:(void (^)(AMSSnapshotBag *, NSError *))a0;
- (BOOL)isExpired;
- (id)doubleForKey:(id)a0;
- (id)URLForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)boolForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
