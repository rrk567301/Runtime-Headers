@class NSArray;

@interface NSPersistentUIPreservedStateDirectory : NSObject {
    NSArray *_publicWindowDictionaries;
    int _privateStateFD;
}

- (void)dealloc;
- (BOOL)isValid;
- (void)dispose;
- (id)initWithStateDirectory:(id)a0;
- (BOOL)readRecordsIntoArray:(id)a0 includeCarbonWindows:(BOOL)a1 includeCocoaWindows:(BOOL)a2;

@end
