@class NSDictionary, NSString, NSAttributedString;

@interface ICTextStyle : NSObject

@property (retain) NSDictionary *attributes;
@property (retain) NSString *name;
@property unsigned int ttStyle;
@property (readonly, copy, nonatomic) NSAttributedString *attributedName;
@property (readonly) BOOL isTextList;

+ (id)dashStyle;
+ (BOOL)autoListInsertionEnabled;
+ (unsigned int)noteDefaultNamedStyle;
+ (id)titleStyle;
+ (id)headingStyle;
+ (id)subheadingStyle;
+ (id)bodyStyle;
+ (id)fixedWidthStyle;
+ (id)bulletStyle;
+ (id)numberedStyle;
+ (unsigned int)validatedNamedStyle:(unsigned int)a0;
+ (id)defaultTextStyles;
+ (id)icaxStyleDescriptionForNamedStyle:(unsigned int)a0;
+ (void)setNoteDefaultNamedStyle:(unsigned int)a0;
+ (id)titleForNamedStyle:(unsigned int)a0;
+ (id)settingsDescriptionForNamedStyle:(unsigned int)a0;
+ (id)styleForNamedStyle:(unsigned int)a0;
+ (void)setAutoListInsertionEnabled:(BOOL)a0;

- (void).cxx_destruct;
- (id)icaxStyleDescription;

@end
