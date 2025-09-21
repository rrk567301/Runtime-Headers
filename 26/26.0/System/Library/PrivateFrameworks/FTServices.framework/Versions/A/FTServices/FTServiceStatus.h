@interface FTServiceStatus : NSObject

@property (nonatomic) int supportedServicesToken;
@property unsigned long long supportedServicesFlags;
@property (nonatomic) BOOL blockPost;
@property (readonly, nonatomic) BOOL iMessageSupported;
@property (readonly, nonatomic) BOOL faceTimeAudioSupported;
@property (readonly, nonatomic) BOOL faceTimeMultiwaySupported;

+ (id)sharedInstance;

- (id)initPrivate;
- (void)_removeObservers;
- (void)dealloc;
- (unsigned long long)_noCache_supportedServicesFlags;
- (void)_reload;
- (void)_addObservers;

@end
