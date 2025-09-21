@class NSString, SOVoiceObject;

@interface VoiceTableRow : NSObject {
    char _selected;
}

@property (getter=isGroupRow) char groupRow;
@property (getter=isSelected) char selected;
@property unsigned long long tableIndex;
@property (readonly, retain) NSString *title;
@property (readonly, retain) SOVoiceObject *voiceObject;

+ (id)arrangedRowsFromVoiceObjects:(id)a0 useLanguageCodeOnlyToSelectVoices:(char)a1 showIndividualQualities:(char)a2 showFullGroupNames:(char)a3 showCurrentLocaleAtTop:(char)a4;

- (void)dealloc;
- (id)description;
- (id)initWithTitle:(id)a0 voiceObject:(id)a1;
- (void)setSelectedUsingLanguageCodeOnlyToSelectVoices:(char)a0;

@end
