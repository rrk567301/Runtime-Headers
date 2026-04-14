@class NSString, NSError;
@protocol HMDProfilePhoto;

@interface HomeKitDaemon.AccountMetadata : NSObject <HMDAccountMetadata> {
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ _iCloudAltDSID;
    void /* unknown type, empty encoding */ _firstName;
    void /* unknown type, empty encoding */ _lastName;
    void /* unknown type, empty encoding */ accountStore;
}

@property (nonatomic, readonly) NSString *iCloudAltDSID;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *lastName;

- (void).cxx_destruct;
- (id)init;
- (void)profilePhotoWithCompletionHandler:(void (^)(id<HMDProfilePhoto>, NSError *))a0;
- (void)updateAccountMetadata;

@end
