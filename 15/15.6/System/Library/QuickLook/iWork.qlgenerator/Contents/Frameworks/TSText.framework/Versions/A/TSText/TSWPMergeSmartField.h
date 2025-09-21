@class NSString, TSWPMergeFieldType;

@interface TSWPMergeSmartField : TSWPPlaceholderSmartField

@property (copy, nonatomic) TSWPMergeFieldType *fieldType;
@property (nonatomic) long long category;
@property (nonatomic) char requiresFollowingWhitespace;
@property (nonatomic) char hasCustomText;
@property (copy, nonatomic) NSString *whitespace;
@property (copy, nonatomic) NSString *guid;

- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (char)allowsPasteAsSmartField;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (unsigned short)smartFieldKind;
- (char)allowsReplacing;
- (id)initWithContext:(id)a0 category:(long long)a1;
- (id)scriptTag;

@end
