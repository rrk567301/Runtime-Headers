@class NSString, NSKeyedArchiver;

@interface HMDRemoteKeyedArchiver : HMFObject

@property (retain, nonatomic) NSKeyedArchiver *archiver;
@property (retain, nonatomic) NSString *transportType;

- (void)dealloc;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)encodedData;
- (void)finishEncoding;
- (id)initForWritingWithRemoteDeviceIsOnSameAccount:(BOOL)a0 remoteGateway:(BOOL)a1 remoteUserIsAdministrator:(BOOL)a2 user:(id)a3 dataVersion:(long long)a4 supportedFeatures:(id)a5;
- (id)initForWritingWithRemoteDeviceIsOnSameAccount:(BOOL)a0 remoteGateway:(BOOL)a1 remoteUserIsAdministrator:(BOOL)a2 user:(id)a3 supportedFeatures:(id)a4;
- (void)__configure;

@end
