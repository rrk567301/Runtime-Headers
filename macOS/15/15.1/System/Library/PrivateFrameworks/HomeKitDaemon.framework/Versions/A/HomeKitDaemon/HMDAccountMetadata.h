@class NSString, NSData, NSError;

@interface HMDAccountMetadata : NSObject {
    void /* unknown type, empty encoding */ iCloudAltDSID;
    void /* unknown type, empty encoding */ firstName;
    void /* unknown type, empty encoding */ lastName;
    void /* unknown type, empty encoding */ accountStore;
}

@property (class, nonatomic, readonly) HMDAccountMetadata *shared;

@property (nonatomic, copy) NSString *iCloudAltDSID;
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic, copy) NSString *lastName;

- (id)init;
- (void).cxx_destruct;
- (void)profilePhotoWithCompletionHandler:(void (^)(NSData *, NSError *))a0;
- (void)updateAccountMetadata;

@end
