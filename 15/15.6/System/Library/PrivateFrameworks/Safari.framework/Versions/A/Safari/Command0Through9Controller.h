@interface Command0Through9Controller : NSObject

+ (long long)_outcomeForEvent:(id)a0 handledBeforeWebProcess:(char)a1 forWindowController:(id)a2 index:(unsigned long long *)a3;
+ (char)handleEvent:(id)a0 beforeWebProcessDoes:(char)a1 forWindowController:(id)a2;
+ (char)shouldSwitchTabInResponseToKeyEvent:(id)a0 forWindowController:(id)a1;
+ (char)shouldVisitFavoriteInResponseToKeyEvent:(id)a0;

@end
