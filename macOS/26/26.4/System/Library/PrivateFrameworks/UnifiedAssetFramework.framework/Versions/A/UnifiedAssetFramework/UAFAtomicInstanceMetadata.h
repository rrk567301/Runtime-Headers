@class NSString, NSError;

@interface UAFAtomicInstanceMetadata : NSObject

@property (readonly) NSString *latestDownloadedAtomicInstance;
@property (readonly) NSString *assetSetId;
@property (readonly) NSError *availableForUseError;
@property (readonly) NSError *newerVersionError;
@property (readonly) BOOL originPSUS;
@property (readonly) BOOL originFactory;
@property (readonly) long long originType;

- (id)initWithStatus:(id)a0;
- (void).cxx_destruct;

@end
