@class NSMutableString, NSMutableDictionary;

@interface PBTextWriter : NSObject {
    char _newlinesPrinted;
    long long _indent;
    NSMutableString *_dest;
    NSMutableDictionary *_cachedObjectTypes;
}

- (void)dealloc;
- (id)init;
- (id)string;
- (void)reset;
- (char)write:(id)a0;

@end
