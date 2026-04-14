@class NSMutableSet;

@interface _NSMenuShortcutUpdater : NSObject {
    NSMutableSet *_menus;
}

+ (id)updater;

- (void)unschedule:(id)a0;
- (void)schedule:(id)a0;
- (BOOL)isScheduled:(id)a0;
- (id)init;

@end
