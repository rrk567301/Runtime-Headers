@class NSMutableDictionary, ATXModeMetadataConstants;

@interface ATXModeEntityStore : NSObject {
    NSMutableDictionary *_entityStore;
    ATXModeMetadataConstants *_modeMetadataConstants;
}

- (void).cxx_destruct;
- (id)init;
- (id)appEntityForBundleId:(id)a0;
- (id)initWithModeMetadataConstants:(id)a0;

@end
