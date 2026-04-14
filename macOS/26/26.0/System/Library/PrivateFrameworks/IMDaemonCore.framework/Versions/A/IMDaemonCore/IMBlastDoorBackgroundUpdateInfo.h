@class NSString;

@interface IMBlastDoorBackgroundUpdateInfo : NSObject

@property (nonatomic) unsigned long long backgroundVersion;
@property (copy, nonatomic) NSString *transferId;
@property (copy, nonatomic) NSString *ownerId;
@property (copy, nonatomic) NSString *signature;
@property (copy, nonatomic) NSString *requestURL;
@property (copy, nonatomic) NSString *encryptionKey;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) unsigned long long posterDataVersion;
@property (copy, nonatomic) NSString *chatId;
@property (nonatomic) BOOL posterWasRemoved;

- (id)initWith:(id)a0;
- (void).cxx_destruct;

@end
