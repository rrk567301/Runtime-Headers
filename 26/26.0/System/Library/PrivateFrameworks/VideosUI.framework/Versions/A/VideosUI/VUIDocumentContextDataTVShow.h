@class NSString;

@interface VUIDocumentContextDataTVShow : VUIDocumentContextData

@property (nonatomic) BOOL needsAdamIdToCanonicalIdConversion;
@property (readonly, copy, nonatomic) NSString *adamID;
@property (readonly, copy, nonatomic) NSString *showID;
@property (readonly, copy, nonatomic) NSString *episodeID;

- (id)jsonData;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAdamID:(id)a0;
- (id)initWithShowID:(id)a0 episodeID:(id)a1;

@end
