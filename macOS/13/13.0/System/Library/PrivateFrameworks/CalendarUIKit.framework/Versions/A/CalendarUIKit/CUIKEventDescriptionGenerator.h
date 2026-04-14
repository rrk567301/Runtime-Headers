@interface CUIKEventDescriptionGenerator : CUIKDescriptionGenerator

+ (id)sharedGenerator;

- (id)textRepresentationForEvent:(id)a0 withTextFormat:(int)a1 showURI:(BOOL)a2;
- (id)dateStringRepresentationForEvent:(id)a0;
- (id)_showEventURLStringForEvent:(id)a0;
- (BOOL)_virtualConferenceUsesShortRepresentation:(id)a0;
- (id)_textRepresentationForAttendee:(id)a0 includeEmailAddress:(BOOL)a1;
- (id)_attributedStringWithURL:(id)a0 title:(id)a1;
- (id)_urlAttributes:(id)a0;
- (id)_basicTextAttributes;
- (id)_boldBasicTextAttributes;
- (id)virtualConferenceEmailHTMLRepresentation:(id)a0;
- (id)_htmlStringWithURL:(id)a0 title:(id)a1;
- (id)_virtualConferenceHTMLRepresentation:(id)a0 isForEmail:(BOOL)a1;

@end
