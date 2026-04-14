@class NSString, TSWPMergeFieldType;

@interface TSWPMergeSmartField : TSWPPlaceholderSmartField

@property (copy, nonatomic) TSWPMergeFieldType *fieldType;
@property (nonatomic) long long category;
@property (nonatomic) BOOL requiresFollowingWhitespace;
@property (nonatomic) BOOL hasCustomText;
@property (copy, nonatomic) NSString *whitespace;
@property (copy, nonatomic) NSString *guid;

- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (BOOL)allowsPasteAsSmartField;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (unsigned short)smartFieldKind;
- (id)scriptTag;
- (id)initWithContext:(id)a0 category:(long long)a1;

@end
