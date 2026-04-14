@interface LPApplicationIdentification : NSObject

+ (BOOL)isCNNMobile;
+ (BOOL)isMessages;
+ (BOOL)isMessagesViewService;
+ (BOOL)isMessagesOrMessagesViewService;
+ (BOOL)isMobileReminders;
+ (BOOL)isMobileNotes;

@end
