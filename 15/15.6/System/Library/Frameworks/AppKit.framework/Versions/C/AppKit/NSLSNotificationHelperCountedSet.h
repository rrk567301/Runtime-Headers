@interface NSLSNotificationHelperCountedSet : NSLSNotificationHelper {
    struct __CFDictionary { } *_dictionary;
}

- (void)dealloc;
- (char)addEntryAndReturnIfWasEmpty:(id)a0;
- (char)isNonEmpty;
- (char)removeEntryAndReturnIfEmpty:(id)a0;

@end
