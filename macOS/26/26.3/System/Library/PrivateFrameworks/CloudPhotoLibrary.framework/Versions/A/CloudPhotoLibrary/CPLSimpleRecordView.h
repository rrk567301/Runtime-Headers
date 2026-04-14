@class CPLRecordChange;

@interface CPLSimpleRecordView : CPLRecordView {
    CPLRecordChange *_synthesizedRecord;
}

- (id)initWithRecord:(id)a0;
- (id)synthesizedRecord;
- (id)scopedIdentifier;
- (void).cxx_destruct;

@end
