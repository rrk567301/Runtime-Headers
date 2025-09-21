@class TSWPTOCEntryStyle;

@interface TSWPTOCMapEntry : NSObject

@property (retain, nonatomic) TSWPTOCEntryStyle *tocEntryStyle;
@property (nonatomic) char showInTOC;

- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (id)initWithTOCEntryStyle:(id)a0 showInTOC:(char)a1;

@end
