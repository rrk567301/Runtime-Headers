@class PODEpisodePlayMetadata, PODEpisodeChangeEntityData, NSString;

@interface PODEpisodeChange : PODContentChange <PODSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PODEpisodePlayMetadata *playMetadata;
@property (readonly, nonatomic) long long episodeSyncID;
@property (readonly, nonatomic) PODEpisodeChangeEntityData *entityData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)updateWithPlayMetadata:(id)a0;
+ (Class)entityDataClass;
+ (id)insertWithEpisodeEntityData:(id)a0;
+ (id)updateWithEpisodeEntityData:(id)a0;
+ (id)deleteWithEpisodeSyncID:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUpdatedPlayMetadata:(id)a0;
- (id)_episodePlayMetadata;

@end
