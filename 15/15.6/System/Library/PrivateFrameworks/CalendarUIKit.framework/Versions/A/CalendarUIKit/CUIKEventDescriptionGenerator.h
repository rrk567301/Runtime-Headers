@interface CUIKEventDescriptionGenerator : CUIKDescriptionGenerator

+ (id)sharedGenerator;

- (id)textRepresentationForEvent:(id)a0 withTextFormat:(unsigned long long)a1 showURI:(char)a2;
- (id)_attributedStringWithURL:(id)a0 title:(id)a1;
- (id)_urlAttributes:(id)a0;
- (id)_basicTextAttributes;
- (id)_boldBasicTextAttributes;
- (id)_htmlStringWithURL:(id)a0 title:(id)a1;
- (id)_showEventURLStringForEvent:(id)a0;
- (id)_textRepresentationForAttendee:(id)a0 includeEmailAddress:(char)a1;
- (id)_virtualConferenceHTMLRepresentation:(id)a0 isForEmail:(char)a1;
- (char)_virtualConferenceUsesShortRepresentation:(id)a0;
- (id)dateStringRepresentationForEvent:(id)a0;
- (id)virtualConferenceEmailHTMLRepresentation:(id)a0;

@end
