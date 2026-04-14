@class NSString, NSCalendar, NSDateComponents;

@interface CUIKDefaultIconGenerator : NSObject <CUIKIconGenerator>

@property (readonly, copy, nonatomic) NSCalendar *calendar;
@property (readonly, copy, nonatomic) NSDateComponents *dateComponents;
@property (readonly, nonatomic) long long iconFormat;
@property (readonly, nonatomic) long long appearance;
@property (readonly, nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (readonly, nonatomic) double canvasScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isNonRedDayOfWeekRequiredForLocale:(id)a0;
+ (id)_countriesRequiringNonRedDayOfWeek;
+ (id)_dateNameFromDateComponents:(id)a0 calendar:(id)a1 type:(long long)a2 forceAbbreviated:(BOOL)a3;
+ (id)_languageIdentifierForNumberingSystem:(id)a0;
+ (id)_adjustedAttributesWithLanguageIdentifierIfNeeded:(id)a0 calendar:(id)a1;
+ (id)_dayNumberStringFromDateComponents:(id)a0 calendar:(id)a1;

- (id)initWithForceNoTextEffects:(BOOL)a0;
- (void)_drawDateNameWithContext:(struct CGContext { } *)a0;
- (double)_roundSpecToActual:(double)a0;
- (struct CGImage { } *)iconImageWithDateComponents:(id)a0 calendar:(id)a1 format:(long long)a2 size:(struct CGSize { double x0; double x1; })a3 scale:(double)a4 appearance:(long long)a5 layers:(unsigned long long)a6;
- (id)_iconBlackColor;
- (id)_colorForDayOfWeekWithAppearance:(long long)a0;
- (id)_dayNumberFont;
- (void).cxx_destruct;
- (id)_colorForDayNumberWithAppearance:(long long)a0;
- (id)_dateNameFont;
- (void)_drawBackgroundWithContext:(struct CGContext { } *)a0;
- (void)_drawDayNumberWithContext:(struct CGContext { } *)a0;

@end
