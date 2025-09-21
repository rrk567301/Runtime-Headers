@class NSString;

@interface _WKResourceLoadStatisticsFirstParty : NSObject <WKObject> {
    struct AlignedStorage<API::ResourceLoadStatisticsFirstParty, 8UL> { struct Storage { unsigned char data[40]; } m_storage; } _firstParty;
}

@property (readonly, nonatomic) NSString *firstPartyDomain;
@property (readonly, nonatomic) BOOL thirdPartyStorageAccessGranted;
@property (readonly, nonatomic) double timeLastUpdated;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)storageAccess;

@end
