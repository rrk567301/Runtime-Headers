@class NSString, NSUUID, NSArray, BMStreamSyncPolicy, BMStoreConfig, BMStreamInternalMetadata;

@interface BMStreamConfiguration : NSObject

@property (readonly, nonatomic) NSString *streamIdentifier;
@property (readonly, nonatomic) NSUUID *streamUUID;
@property (readonly, nonatomic) Class eventClass;
@property (readonly, nonatomic) BMStoreConfig *storeConfig;
@property (readonly, nonatomic) NSArray *legacyNames;
@property (readonly, nonatomic) BMStreamSyncPolicy *syncPolicy;
@property (readonly, nonatomic) BMStreamInternalMetadata *internalMetadata;
@property (readonly, nonatomic) BOOL enableSubscriptionSubstream;
@property (readonly, nonatomic) BOOL enableTombstoneSubstream;
@property (readonly, nonatomic) NSString *spaceAttribution;

+ (id)_libraryStreamConfigurationWithUUID:(id)a0 streamIdentifier:(id)a1 eventClass:(Class)a2 storeConfig:(id)a3 syncPolicy:(id)a4 legacyNames:(id)a5 internalMetadata:(id)a6 enableSubscriptionSubstream:(BOOL)a7 enableTombstoneSubstream:(BOOL)a8 spaceAttributionOwner:(id)a9;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithStreamIdentifier:(id)a0 eventClass:(Class)a1 storeConfig:(id)a2;
- (id)initWithStreamIdentifier:(id)a0 eventClass:(Class)a1 storeConfig:(id)a2 syncPolicy:(id)a3 alternativeNames:(id)a4;
- (id)initWithStreamIdentifier:(id)a0 eventClass:(Class)a1 storeConfig:(id)a2 syncPolicy:(id)a3 alternativeNames:(id)a4 internalMetadata:(id)a5;

@end
