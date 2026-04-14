@interface ABEvent : NSObject

+ (BOOL)currentEventHasOptionKey;
+ (BOOL)currentEventHasMask:(unsigned long long)a0;
+ (BOOL)currentEventHasCommandKey;
+ (BOOL)currentEventHasControlKey;
+ (BOOL)currentEventHasShiftKey;

@end
