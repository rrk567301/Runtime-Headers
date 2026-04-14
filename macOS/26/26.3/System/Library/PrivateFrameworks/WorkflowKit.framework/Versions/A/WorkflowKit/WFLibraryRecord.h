@class NSString, NSData;

@interface WFLibraryRecord : WFRecord

@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSData *cloudKitRecordMetadata;
@property (nonatomic) long long syncHash;
@property (nonatomic) long long lastSyncedHash;

+ (long long)syncHashFromData:(id)a0;

- (void).cxx_destruct;

@end
