@class NSString;

@interface _WKResourceLoadStatisticsFirstParty : NSObject <WKObject> {
    struct ObjectStorage<API::ResourceLoadStatisticsFirstParty> { struct type { unsigned char __lx[40]; } data; } _firstParty;
}

@property (readonly, nonatomic) NSString *firstPartyDomain;
@property (readonly, nonatomic) char thirdPartyStorageAccessGranted;
@property (readonly, nonatomic) double timeLastUpdated;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (char)storageAccess;

@end
