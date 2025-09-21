@class NSArray, NSString;
@protocol TSWPCitationSmartFieldEditing;

@interface TSWPCitationSmartField : TSWPSmartField <TSWPCitationRecordHosting> {
    NSArray *_citationRecords;
    char _isLocalizable;
}

@property (copy, nonatomic) NSArray *citationRecords;
@property (nonatomic) char isLocalizable;
@property (nonatomic) id<TSWPCitationSmartFieldEditing> editingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)isValidCitationField:(id)a0;

- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (unsigned short)smartFieldKind;
- (char)supportsDeepCopyForUndo;

@end
