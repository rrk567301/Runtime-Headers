@interface NSLSNotificationHelper : NSObject

- (id)init;
- (BOOL)addEntryAndReturnIfWasEmpty:(id)a0;
- (BOOL)removeEntryAndReturnIfEmpty:(id)a0;
- (BOOL)isNonEmpty;

@end
