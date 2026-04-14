@class EDString, EDAlignmentInfo, EDProtection;

@interface EDTextBox : NSObject {
    EDString *mText;
    EDAlignmentInfo *mAlignmentInfo;
    EDProtection *mProtection;
}

+ (id)textBox;

- (id)protection;
- (void)setText:(id)a0;
- (id)text;
- (id)description;
- (void).cxx_destruct;
- (void)setProtection:(id)a0;
- (id)alignmentInfo;
- (void)setAlignmentInfo:(id)a0;

@end
