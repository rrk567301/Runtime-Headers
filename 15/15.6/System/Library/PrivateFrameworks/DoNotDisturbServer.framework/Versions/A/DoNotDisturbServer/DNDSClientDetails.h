@class NSString, NSArray;

@interface DNDSClientDetails : NSObject <NSCopying>

@property (readonly, nonatomic, getter=forcesAssertionStatusUpdate) char forcesAssertionStatusUpdate;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSArray *identifiers;
@property (readonly, nonatomic, getter=isResolutionContextAssumingDeviceUILocked) char resolutionContextAssumingDeviceUILocked;
@property (readonly, nonatomic, getter=isUserInteractionClient) char userInteractionClient;
@property (readonly, nonatomic, getter=isPersistentAssertionClient) char persistentAssertionClient;
@property (readonly, nonatomic, getter=isSyncSuppressedClient) char syncSuppressedClient;
@property (readonly, nonatomic, getter=isIOS14SyncSuppressedClient) char iOS14SyncSuppressedClient;

+ (id)_detailsForClientIdentifier:(id)a0 bundleInfoDictionary:(id)a1;
+ (id)detailsForBundleAtURL:(id)a0;
+ (id)detailsForClientIdentifier:(id)a0 applicationBundleURL:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithClientIdentifier:(id)a0 identifiers:(id)a1 resolutionContextAssumingDeviceUILocked:(char)a2 userInteractionClient:(char)a3 persistentAssertionClient:(char)a4 syncSuppressedClient:(char)a5 iOS14SyncSuppressedClient:(char)a6 forcesAssertionStatusUpdate:(char)a7;

@end
