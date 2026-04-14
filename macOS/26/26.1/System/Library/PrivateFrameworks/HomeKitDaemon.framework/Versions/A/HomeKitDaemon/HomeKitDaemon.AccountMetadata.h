@class NSString, NSError;
@protocol HMDProfilePhoto;

@interface HomeKitDaemon.AccountMetadata : NSObject <HMDAccountMetadata> {
    void /* function */ iCloudAltDSID;
    void /* function */ firstName;
    void /* function */ lastName;
    void /* unknown type, empty encoding */ accountStore;
}

@property (nonatomic, copy) NSString *iCloudAltDSID;
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic, copy) NSString *lastName;

- (void).cxx_destruct;
- (id)init;
- (void)profilePhotoWithCompletionHandler:(void (^)(id<HMDProfilePhoto>, NSError *))a0;
- (void)updateAccountMetadata;

@end
