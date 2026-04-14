@interface EKMapsUtilities : NSObject

+ (id)mapsURLForFallbackLocationTitle:(id)a0 structuredLocation:(id)a1 hasMapItemLaunchOptionFromTimeToLeaveNotification:(BOOL)a2;
+ (void)geocodeEventIfNeeded:(id)a0;
+ (id)_locationStringForStructuredLocation:(id)a0 withTitle:(id)a1;
+ (id)mapsURLForLocation:(id)a0 onEvent:(id)a1 hasMapItemLaunchOptionFromTimeToLeaveNotification:(BOOL)a2;

@end
