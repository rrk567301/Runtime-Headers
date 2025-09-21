@class NSString, MPAVRoute, MRPlayerPath;

@interface MPCPlayerPath : NSObject <NSCopying, NSSecureCoding> {
    int _pid;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long resolvedPlaybackIntentDestination;
@property (readonly, nonatomic) void *mediaRemotePlayerPath;
@property (readonly, copy, nonatomic) NSString *representedBundleDisplayName;
@property (readonly, copy, nonatomic) NSString *representedBundleID;
@property (readonly, nonatomic) MPAVRoute *route;
@property (readonly, nonatomic, getter=isSystemMusicPath) char systemMusicPath;
@property (readonly, nonatomic, getter=isResolved) char resolved;
@property (readonly, nonatomic, getter=isFullyResolved) char fullyResolved;
@property (readonly, nonatomic) MRPlayerPath *mrPlayerPath;
@property (readonly, nonatomic, getter=isNativeMusicPath) char nativeMusicPath;
@property (readonly, nonatomic, getter=isNativePodcastsPath) char nativePodcastsPath;
@property (readonly, nonatomic, getter=isNativeBooksPath) char nativeBooksPath;
@property (readonly, nonatomic) void *origin;
@property (readonly, nonatomic) NSString *deviceUID;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *playerID;
@property (readonly, nonatomic, getter=isInProcess) char inProcess;
@property (readonly, nonatomic, getter=isLocal) char local;
@property (readonly, nonatomic, getter=isLocalDevice) char localDevice;
@property (readonly, nonatomic) char isCompanion;

+ (id)deviceActivePlayerPath;
+ (id)pathWithCustomOrigin:(void *)a0 bundleID:(id)a1 playerID:(id)a2;
+ (id)pathWithDeviceUID:(id)a0 bundleID:(id)a1 pid:(int)a2 playerID:(id)a3;
+ (id)pathWithDeviceUIDs:(id)a0 bundleID:(id)a1 pid:(int)a2 playerID:(id)a3;
+ (id)pathWithRoute:(id)a0 bundleID:(id)a1 playerID:(id)a2;
+ (id)pathWithRoute:(id)a0 mediaRemotePlayerPath:(void *)a1 isResolved:(char)a2;
+ (id)systemMusicPathWithRoute:(id)a0 playerID:(id)a1;
+ (id)systemPodcastsPathWithRoute:(id)a0 playerID:(id)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)resolveWithCompletion:(id /* block */)a0;
- (void)getPlaybackIntentDestinationWithCompletion:(id /* block */)a0;
- (id)initWithDeviceUID:(id)a0 bundleID:(id)a1 pid:(int)a2 playerID:(id)a3;
- (id)initWithRoute:(id)a0 bundleID:(id)a1 pid:(int)a2 playerID:(id)a3;
- (id)initWithRoute:(id)a0 bundleID:(id)a1 playerID:(id)a2;
- (id)pathByAppendingPlayerIDSuffix:(id)a0;
- (void)resolveWithRouteResolvedHandler:(id /* block */)a0 completion:(id /* block */)a1;

@end
