@interface PLLegacyChangeEvent : NSObject

+ (id)_descriptionForEvent:(id)a0;
+ (id)_descriptionForEvent:(id)a0 withPersistentStoreCoordinator:(id)a1;
+ (char)isEmptyEvent:(id)a0;
+ (id)localChangeEventFromChangeHubEvent:(id)a0 withLibraryBundle:(id)a1;

@end
