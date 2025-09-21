@class _KSFileEntry, NSDate;

@interface _KSUserWordsInfo : NSObject {
    NSDate *_modifiedDate;
    unsigned long long _size;
    _KSFileEntry *_file;
}

+ (id)infoWithRecord:(id)a0;
+ (id)filesForLanguage:(id)a0;
+ (id)infoWithFiles:(id)a0;
+ (id)keyForData;
+ (id)keyNamesExcludingData;
+ (id)keyboardDirectory;

- (id)description;
- (void).cxx_destruct;
- (id)initWithRecord:(id)a0;
- (id)initWithFiles:(id)a0;
- (char)isBetterThan:(id)a0;
- (void)saveToRecord:(id)a0;

@end
