@class NSData, STSReaderCryptarch;

@interface STSEngagementConfiguration : NSObject

@property (readonly, nonatomic) unsigned long long deviceEngagementType;
@property (readonly, nonatomic) unsigned long long dataRetrievalType;
@property (readonly, nonatomic) NSData *engagementData;
@property (readonly, nonatomic) STSReaderCryptarch *sessionCryptarch;

+ (id)configurationWithDeviceEngagementType:(unsigned long long)a0 dataRetrievalType:(unsigned long long)a1 engagementData:(id)a2;
+ (id)configurationWithDeviceEngagementType:(unsigned long long)a0 dataRetrievalType:(unsigned long long)a1 engagementData:(id)a2 sessionCryptarch:(id)a3;

- (void).cxx_destruct;
- (id)initWithDeviceEngagementType:(unsigned long long)a0 dataRetrievalType:(unsigned long long)a1 engagementData:(id)a2 sessionCryptarch:(id)a3;

@end
