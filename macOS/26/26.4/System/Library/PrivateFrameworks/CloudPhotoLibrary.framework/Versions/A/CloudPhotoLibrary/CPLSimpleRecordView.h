@class CPLRecordChange;

@interface CPLSimpleRecordView : CPLRecordView {
    CPLRecordChange *_synthesizedRecord;
}

- (id)initWithRecord:(id)a0;
- (id)scopedIdentifier;
- (void).cxx_destruct;
- (id)synthesizedRecord;

@end
