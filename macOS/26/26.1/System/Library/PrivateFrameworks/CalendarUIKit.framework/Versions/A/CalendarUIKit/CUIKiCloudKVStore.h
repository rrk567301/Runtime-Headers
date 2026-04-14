@class NSDate;
@protocol NSObject, NSCoding, NSCopying;

@interface CUIKiCloudKVStore : NSObject

@property (retain) id<NSObject, NSCopying, NSCoding> ubiquityIdentityToken;
@property (nonatomic) BOOL hasConnectedToCarBluetooth;
@property (retain, nonatomic) NSDate *lastCarConnectionDate;

+ (id)sharediCloudKVStore;
+ (BOOL)_haveiCloudKVStoreEntitlement;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_canAccessiCloudKVStore;
- (void)_identityChanged:(id)a0;
- (void)_storeDidChange:(id)a0;

@end
