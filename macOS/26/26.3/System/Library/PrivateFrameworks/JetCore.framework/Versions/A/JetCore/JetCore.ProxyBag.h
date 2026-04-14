@class NSString, NSDate;

@interface JetCore.ProxyBag : NSObject <AMSBagProtocol> {
    void /* unknown type, empty encoding */ bag;
}

@property (nonatomic, readonly) BOOL expired;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) NSString *profile;
@property (nonatomic, readonly) NSString *profileVersion;

- (id)integerForKey:(id)a0;
- (void)createSnapshotWithCompletion:(id /* block */)a0;
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
