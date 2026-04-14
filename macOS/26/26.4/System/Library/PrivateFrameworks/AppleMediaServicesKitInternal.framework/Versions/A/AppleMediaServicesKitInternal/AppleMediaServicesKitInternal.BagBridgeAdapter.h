@class AMSCB1PBridge, NSDate;

@interface AppleMediaServicesKitInternal.BagBridgeAdapter : NSObject <AMSCB1PBagProtocol> {
    void /* unknown type, empty encoding */ bag;
}

@property (nonatomic, readonly) AMSCB1PBridge *bridge;
@property (nonatomic, readonly) NSDate *expiry;
@property (nonatomic, readonly) BOOL isExpired;

- (id)stringForKey:(id)a0;
- (id)doubleForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (id)boolForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)urlForKey:(id)a0;
- (id)intForKey:(id)a0;
- (id)urlForKey:(id)a0 account:(id)a1;

@end
