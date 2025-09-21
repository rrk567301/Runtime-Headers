@interface EKViewControllerSettings : NSObject

@property char canResizeWindow;
@property double topMargin;
@property double bottomMargin;
@property double leftMargin;
@property double rightMargin;
@property double titleFontSize;
@property double contentFontSize;
@property double expandedContentFontSize;
@property double labelFontSize;
@property double smallLabelFontSize;
@property char useWideSpacing;
@property char showCalendarPopUp;
@property char showEventSuggestions;
@property char showRecurrenceNavigation;
@property double leftDividerMargin;
@property double rightDividerMargin;
@property char isReadOnly;
@property char miniInspector;
@property char showLinksAsText;
@property char hideButtons;
@property char hideEventSuggestions;
@property char disableAttachments;
@property char allowsCustomPickers;
@property char delayDatePickerBecomingKey;
@property char isSpotlightExtension;
@property char useAlternateFont;

- (id)init;

@end
