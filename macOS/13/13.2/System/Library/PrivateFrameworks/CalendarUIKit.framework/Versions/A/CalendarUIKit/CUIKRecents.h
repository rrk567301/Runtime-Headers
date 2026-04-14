@interface CUIKRecents : NSObject

+ (id)logHandle;
+ (id)mapKitHandleForRecent:(id)a0;
+ (id)mapKitStyleAttributesForRecent:(id)a0;
+ (BOOL)recentMissingStyleAttributes:(id)a0;
+ (id)recentEventWithRecentContact:(id)a0 styleAttributes:(id)a1;
+ (id)_archivedInstance:(id)a0;
+ (id)locationForRecent:(id)a0;
+ (id)recentForLocation:(id)a0 withAddressString:(id)a1 andTitle:(id)a2 mapItem:(id)a3;

@end
