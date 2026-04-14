@class NSDate;

@interface ICAssetThumbnailCache : NSObject <ICThumbnailCaching>

@property (class, nonatomic, readonly) NSDate *currentVersionDate;
@property (class, nonatomic, readonly) ICAssetThumbnailCache *shared;

- (id)init;
- (id)objectForKeyedSubscript:(id)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)creationDateFor:(id)a0;
- (void)invalidateForObjectIdentifiers:(id)a0;

@end
