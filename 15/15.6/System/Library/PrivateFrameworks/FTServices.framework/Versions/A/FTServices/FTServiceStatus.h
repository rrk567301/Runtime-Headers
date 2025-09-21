@interface FTServiceStatus : NSObject

@property (nonatomic) int supportedServicesToken;
@property unsigned long long supportedServicesFlags;
@property (nonatomic) char blockPost;
@property (readonly, nonatomic) char iMessageSupported;
@property (readonly, nonatomic) char faceTimeAudioSupported;
@property (readonly, nonatomic) char faceTimeMultiwaySupported;

+ (id)sharedInstance;

- (void)dealloc;
- (void)_removeObservers;
- (id)initPrivate;
- (void)_addObservers;
- (unsigned long long)_noCache_supportedServicesFlags;
- (void)_reload;

@end
