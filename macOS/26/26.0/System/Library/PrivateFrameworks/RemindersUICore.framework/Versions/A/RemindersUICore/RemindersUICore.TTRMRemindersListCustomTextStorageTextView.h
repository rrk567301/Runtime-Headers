@interface RemindersUICore.TTRMRemindersListCustomTextStorageTextView : RemindersUICore.TTRMRemindersListTextView {
    void /* unknown type, empty encoding */ reminderTextStorage;
    void /* unknown type, empty encoding */ tokenInteraction;
}

- (BOOL)validateMenuItem:(id)a0;
- (void)toggleItalics:(id)a0;
- (void)toggleUnderline:(id)a0;
- (BOOL)becomeFirstResponder;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)toggleAutomaticTextReplacement:(id)a0;
- (void)setSelectedRanges:(id)a0 affinity:(unsigned long long)a1 stillSelecting:(BOOL)a2;
- (void)toggleAutomaticDashSubstitution:(id)a0;
- (void)toggleAutomaticDataDetection:(id)a0;
- (void)toggleAutomaticLinkDetection:(id)a0;
- (void)toggleAutomaticQuoteSubstitution:(id)a0;
- (void)toggleAutomaticSpellingCorrection:(id)a0;
- (void)toggleBold:(id)a0;
- (void)toggleContinuousSpellChecking:(id)a0;
- (void)toggleGrammarChecking:(id)a0;
- (void)toggleSmartInsertDelete:(id)a0;
- (void)adoptForeignHashtag:(id)a0;
- (void)applyBulletedListStyle:(id)a0;
- (void)applyDashedListStyle:(id)a0;
- (void)applyOrderedListStyle:(id)a0;
- (void)changeReminderTextListStyle:(id)a0;
- (void)changeReminderTextStyle:(id)a0;
- (void)convertTextToHashtag:(id)a0;
- (id)initWithFrame_rdar87778381:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeHashtagAttribute:(id)a0;
- (void)removeHashtagAttributedText:(id)a0;

@end
