@class NSString;

@interface ISyncRecordViewWithConflicts : ISyncConcreteRecordView {
    NSString *_clientId;
}

- (void)dealloc;
- (id)recordGraphNodesWithIdentifiers:(id)a0;
- (id)actualRecordsWithIdentifiers:(id)a0;
- (id)initWithRecordStore:(id)a0 entityNames:(id)a1 clientIdentifier:(id)a2;
- (id)recordByApplyingConflictValuesToRecord:(id)a0 withRecordId:(id)a1;

@end
