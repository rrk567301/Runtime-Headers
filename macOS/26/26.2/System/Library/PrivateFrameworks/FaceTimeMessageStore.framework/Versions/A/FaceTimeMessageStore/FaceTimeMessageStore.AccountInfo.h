@class NSString;

@interface FaceTimeMessageStore.AccountInfo : NSObject {
    void /* unknown type, empty encoding */ accountStatus;
    void /* unknown type, empty encoding */ deviceToDeviceEncryption;
    void /* unknown type, empty encoding */ hasValidCredentials;
}

@property (nonatomic, readonly) NSString *description;

- (BOOL)isEqual:(id)a0;
- (id)init;

@end
