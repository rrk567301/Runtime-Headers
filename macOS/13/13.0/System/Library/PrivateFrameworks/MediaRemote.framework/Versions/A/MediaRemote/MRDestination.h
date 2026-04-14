@class MRPlayer, NSString, MRPlayerPath, MRClient, MROrigin, MRAVEndpoint;

@interface MRDestination : NSObject <NSCopying>

@property (retain, nonatomic) NSString *outputDeviceUID;
@property (retain, nonatomic) MRAVEndpoint *endpoint;
@property (copy, nonatomic) MRPlayerPath *playerPath;
@property (retain, nonatomic) MROrigin *origin;
@property (readonly, nonatomic) NSString *outputContextUID;
@property (readonly, nonatomic) BOOL isLocal;
@property (readonly, nonatomic) BOOL isProactive;
@property (readonly, nonatomic) BOOL isUserSelected;
@property (copy, nonatomic) MRClient *client;
@property (copy, nonatomic) MRPlayer *player;

+ (id)proactiveDestination;
+ (id)userSelectedDestination;
+ (id)localDestination;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_init;
- (void).cxx_destruct;
- (id)initWithEndpoint:(id)a0;
- (id)initWithOrigin:(id)a0;
- (id)initWithOutputDeviceUID:(id)a0;
- (id)initWithPlayerPath:(id)a0;
- (id)initWithOutputContextUID:(id)a0;
- (void)populatePlayerPathIfNeeded;

@end
