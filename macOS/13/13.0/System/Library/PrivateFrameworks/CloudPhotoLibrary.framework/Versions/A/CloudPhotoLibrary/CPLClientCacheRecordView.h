@class CPLRecordChange, CPLScopedIdentifier;
@protocol CPLEngineIDMapping;

@interface CPLClientCacheRecordView : CPLRecordView {
    CPLScopedIdentifier *_localScopedIdentifier;
}

@property (readonly, nonatomic) CPLScopedIdentifier *localScopedIdentifier;
@property (readonly, nonatomic) CPLRecordChange *cloudRecord;
@property (readonly, nonatomic) id<CPLEngineIDMapping> idMapping;

- (id)description;
- (id)redactedDescription;
- (void).cxx_destruct;
- (id)relation;
- (Class)recordClass;
- (id)scopedIdentifier;
- (id)synthesizedRecord;
- (id)relatedScopedIdentifier;
- (id)secondaryScopedIdentifier;
- (id)recordChangeData;
- (id)sharingRecordChangeData;
- (id)initWithLocalScopedIdentifier:(id)a0 cloudRecord:(id)a1 idMapping:(id)a2;

@end
