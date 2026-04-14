@class PGGraphLocationHelper, CLSHolidayCalendarEventService;

@interface PGTitleGenerationContext : NSObject

@property (readonly) PGGraphLocationHelper *locationHelper;
@property (readonly) CLSHolidayCalendarEventService *holidayService;

- (void).cxx_destruct;
- (id)initWithGraph:(id)a0;
- (id)initLegacyForMemories;

@end
