@class NSString, NSDate;
@protocol AMSBagProtocol;

@interface JetCore.OverriddenAMSBag : AMSSnapshotBag <JetCore.DeprecatedOverriddenAMSBag> {
    void /* unknown type, empty encoding */ backing;
    void /* unknown type, empty encoding */ overrides;
}

@property (nonatomic, readonly) BOOL expired;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) NSString *profile;
@property (nonatomic, readonly) NSString *profileVersion;
@property (nonatomic, readonly) id<AMSBagProtocol> replacingSnapshotIfNeeded;

- (id)arrayForKey:(id)a0;
- (void)createSnapshotWithCompletion:(id /* block */)a0;
- (id)boolForKey:(id)a0;
- (id)doubleForKey:(id)a0;
- (BOOL)isExpired;
- (id)initWithData:(id)a0;
- (id)URLForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)integerForKey:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)stringForKey:(id)a0;
- (id)init;
- (void)forwardSnapshotBagExpiredValueAccessed:(id)a0;

@end
