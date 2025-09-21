@class NSDate;
@protocol NSObject, NSCoding, NSCopying;

@interface CUIKiCloudKVStore : NSObject

@property (retain) id<NSObject, NSCopying, NSCoding> ubiquityIdentityToken;
@property (nonatomic) char hasConnectedToCarBluetooth;
@property (retain, nonatomic) NSDate *lastCarConnectionDate;

+ (id)sharediCloudKVStore;
+ (char)_haveiCloudKVStoreEntitlement;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)_canAccessiCloudKVStore;
- (void)_identityChanged:(id)a0;
- (void)_storeDidChange:(id)a0;

@end
