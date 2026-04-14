@class NSString;

@interface CUIKSpotlightEntityAnnotator : NSObject <CalSpotlightEntityAnnotator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)associateCalendarEntityWithIdentifier:(id)a0 withSearchableItem:(id)a1;
- (void)associateEventEntityWithIdentifier:(id)a0 occurrenceDate:(id)a1 withSearchableItem:(id)a2;

@end
