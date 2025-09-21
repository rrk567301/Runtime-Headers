@class NSMutableDictionary, NSString, NSURL, IDSServerBagLoadedContents, NSObject, IDSServerBagConfig;
@protocol OS_dispatch_queue, IDSServerBagContentProvider;

@interface IDSServerBag : NSObject

@property (retain, nonatomic) IDSServerBagLoadedContents *loadedContents;
@property (retain, nonatomic) NSMutableDictionary *overrideValues;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } contentsLock;
@property (retain, nonatomic) IDSServerBagConfig *config;
@property (retain, nonatomic) id<IDSServerBagContentProvider> contentProvider;
@property (readonly, nonatomic) NSURL *bagURL;
@property (readonly, nonatomic) NSString *apsEnvironmentName;
@property (readonly, nonatomic) char allowSelfSignedCertificates;
@property (readonly, nonatomic) char allowUnsignedBags;
@property (readonly, nonatomic) char isLoaded;
@property (readonly, nonatomic) char isLoading;
@property (readonly, nonatomic) char isInDebilitatedMode;
@property (readonly, nonatomic) char requiresIDSHost;
@property (readonly, nonatomic) char requiresIDSConnection;
@property (readonly, nonatomic) char isServerAvailable;

+ (id)sharedInstance;
+ (id)sharedInstanceForBagType:(long long)a0;
+ (id)_sharedCourierBag;
+ (id)_sharedIDSBag;

- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)objectForKey:(id)a0 ofClass:(Class)a1;
- (id)_overrideValues;
- (void)_clearOverrideValues;
- (void)_setOverrideValue:(id)a0 forKey:(id)a1;
- (id)copyLoadedContents;
- (void)forceBagLoad;
- (id)initWithConfig:(id)a0 queue:(id)a1;
- (id)initWithConfig:(id)a0 queue:(id)a1 contentProvider:(id)a2;
- (void)startBagLoad;
- (id)urlWithKey:(id)a0;

@end
