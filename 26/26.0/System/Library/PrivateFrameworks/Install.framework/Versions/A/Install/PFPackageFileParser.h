@class NSString, NSCharacterSet;

@interface PFPackageFileParser : NSObject {
    NSString *_pathContents;
    struct _NSRange { unsigned long long location; unsigned long long length; } _currentLineRange;
    NSCharacterSet *_separatorSet;
    unsigned int _length;
}

- (id)initWithPath:(id)a0;
- (void)dealloc;
- (BOOL)getNextKey:(id *)a0 andValue:(id *)a1;
- (void)setKeyValueSeparationSet:(id)a0;

@end
