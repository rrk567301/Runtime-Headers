@interface ATXUpcomingMediaQuery : NSObject

+ (id)getAllUpcomingMedia;
+ (id)getUpcomingMediaForBundle:(id)a0 isInternalApplication:(char)a1;
+ (void)getUpcomingMediaForBundle:(id)a0 isInternalApplication:(char)a1 completionHandler:(id /* block */)a2;

@end
