@class CPLRecordView, CPLRecordChange;

@interface CPLChangedRecordView : CPLRecordView

@property (readonly, nonatomic) CPLRecordView *baseRecordView;
@property (readonly, nonatomic) CPLRecordChange *change;

- (id)description;
- (id)redactedDescription;
- (void).cxx_destruct;
- (Class)recordClass;
- (id)scopedIdentifier;
- (BOOL)supportsResources;
- (id)synthesizedRecord;
- (id)changeForType:(unsigned long long)a0;
- (id)placeholderRecord;
- (id)recordChangeData;
- (id)initWithChange:(id)a0 overRecordView:(id)a1;

@end
