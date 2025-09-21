@interface NSThemeWidgetBezelConfiguration : NSButtonBezelConfiguration

@property BOOL recordingStyle;
@property long long buttonID;
@property (getter=isObscured) BOOL obscured;
@property (getter=isEdited) BOOL edited;
@property long long widgetType;
@property long long windowType;

@end
