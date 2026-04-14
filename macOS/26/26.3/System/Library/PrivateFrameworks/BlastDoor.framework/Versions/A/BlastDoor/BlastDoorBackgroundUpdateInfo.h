@class NSString;

@interface BlastDoorBackgroundUpdateInfo : NSObject {
    void /* unknown type, empty encoding */ backgroundUpdateInfo;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned long long backgroundVersion;
@property (nonatomic, readonly) NSString *transferId;
@property (nonatomic, readonly) NSString *ownerId;
@property (nonatomic, readonly) NSString *signature;
@property (nonatomic, readonly) NSString *requestURL;
@property (nonatomic, readonly) NSString *encryptionKey;
@property (nonatomic, readonly) BOOL has_fileSize;
@property (nonatomic, readonly) unsigned long long fileSize;
@property (nonatomic, readonly) BOOL has_posterDataVersion;
@property (nonatomic, readonly) unsigned long long posterDataVersion;
@property (nonatomic, readonly) NSString *chatId;
@property (nonatomic, readonly) BOOL posterWasRemoved;

- (id)init;
- (void).cxx_destruct;

@end
