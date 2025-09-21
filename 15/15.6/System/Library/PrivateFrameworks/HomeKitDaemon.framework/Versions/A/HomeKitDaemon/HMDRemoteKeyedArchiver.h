@class NSString, NSKeyedArchiver, NSData;

@interface HMDRemoteKeyedArchiver : HMFObject

@property (retain, nonatomic) NSKeyedArchiver *archiver;
@property (retain, nonatomic) NSString *transportType;
@property (readonly, copy) NSData *encodedData;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)finishEncoding;
- (void)setClassName:(id)a0 forClass:(Class)a1;
- (id)initForWritingWithRemoteDeviceIsOnSameAccount:(char)a0 remoteGateway:(char)a1 remoteUserIsAdministrator:(char)a2 user:(id)a3 dataVersion:(long long)a4 supportedFeatures:(id)a5;
- (id)initForWritingWithRemoteDeviceIsOnSameAccount:(char)a0 remoteGateway:(char)a1 remoteUserIsAdministrator:(char)a2 user:(id)a3 supportedFeatures:(id)a4;

@end
