@class NSString, NSDate;

@interface JetEngine.ProxyBag : NSObject <AMSBagProtocol> {
    void /* unknown type, empty encoding */ bag;
}

@property (nonatomic, readonly) char expired;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) NSString *profile;
@property (nonatomic, readonly) NSString *profileVersion;

- (id)init;
- (void).cxx_destruct;
- (id)boolForKey:(id)a0;
- (id)URLForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)integerForKey:(id)a0;
- (id)doubleForKey:(id)a0;
- (char)isExpired;
- (void)createSnapshotWithCompletion:(id /* block */)a0;

@end
