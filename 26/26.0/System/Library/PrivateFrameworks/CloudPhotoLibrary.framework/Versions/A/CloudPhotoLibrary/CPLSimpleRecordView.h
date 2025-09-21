@class CPLRecordChange;

@interface CPLSimpleRecordView : CPLRecordView {
    CPLRecordChange *_synthesizedRecord;
}

- (id)scopedIdentifier;
- (id)initWithRecord:(id)a0;
- (id)synthesizedRecord;
- (void).cxx_destruct;

@end
