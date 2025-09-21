@interface ABEvent : NSObject

+ (char)currentEventHasCommandKey;
+ (char)currentEventHasControlKey;
+ (char)currentEventHasMask:(unsigned long long)a0;
+ (char)currentEventHasOptionKey;
+ (char)currentEventHasShiftKey;

@end
