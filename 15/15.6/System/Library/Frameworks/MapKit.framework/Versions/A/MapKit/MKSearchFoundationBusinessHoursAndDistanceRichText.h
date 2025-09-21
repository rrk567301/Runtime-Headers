@class NSString, NSColor;

@interface MKSearchFoundationBusinessHoursAndDistanceRichText : MKSearchFoundationRichText

@property (getter=isBusinessHoursResolved) char businessHoursResolved;
@property (getter=isDistanceResolved) char distanceResolved;
@property (retain) NSString *hoursString;
@property (retain) NSColor *hoursColor;

- (void).cxx_destruct;
- (char)isRichTextResolved;
- (void)resolveBusinessHoursByMapItem:(id)a0 lines:(id)a1;
- (void)resolveDistanceNotFound;
- (void)resolveDistanceString:(id)a0 lines:(id)a1;
- (void)updateFormattedTextForLines:(id)a0;

@end
