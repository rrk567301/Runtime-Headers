@interface ABEvent : NSObject

+ (BOOL)currentEventHasCommandKey;
+ (BOOL)currentEventHasControlKey;
+ (BOOL)currentEventHasOptionKey;
+ (BOOL)currentEventHasShiftKey;
+ (BOOL)currentEventHasMask:(unsigned long long)a0;

@end
