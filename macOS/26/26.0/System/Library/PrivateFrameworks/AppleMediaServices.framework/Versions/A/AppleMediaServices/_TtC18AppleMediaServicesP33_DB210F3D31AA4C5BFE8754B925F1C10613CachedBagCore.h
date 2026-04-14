@class AMSSnapshotBag, NSString, NSDate, AMSProcessInfo, NSError;

@interface _TtC18AppleMediaServicesP33_DB210F3D31AA4C5BFE8754B925F1C10613CachedBagCore : NSObject <AMSBagProtocol> {
    void /* function */ profile;
    void /* function */ profileVersion;
    void /* unknown type, empty encoding */ bagLoader;
}

@property (nonatomic, readonly) NSString *profile;
@property (nonatomic, readonly) NSString *profileVersion;
@property (nonatomic, readonly) AMSProcessInfo *processInfo;
@property (nonatomic, readonly) BOOL expired;
@property (nonatomic, readonly) NSDate *expirationDate;

- (id)stringForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (BOOL)isExpired;
- (id)URLForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)doubleForKey:(id)a0;
- (id)integerForKey:(id)a0;
- (id)boolForKey:(id)a0;
- (id)init;
- (void)createSnapshotWithCompletion:(void (^)(AMSSnapshotBag *, NSError *))a0;
- (id)URLForKey:(id)a0 account:(id)a1;
- (void).cxx_destruct;

@end
