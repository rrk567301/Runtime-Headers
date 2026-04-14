@interface CalDAVNotificationHandler : NSObject

+ (id)findMessageWithFilename:(id)a0 inMessages:(id)a1;
+ (id)calendarForServerPath:(id)a0 onPrincipal:(id)a1;
+ (void)process:(id)a0 principal:(id)a1;

@end
