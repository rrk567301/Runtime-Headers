@class NSMutableString, NSMutableDictionary;

@interface PBTextWriter : NSObject {
    BOOL _newlinesPrinted;
    long long _indent;
    NSMutableString *_dest;
    NSMutableDictionary *_cachedObjectTypes;
}

- (BOOL)write:(id)a0;
- (id)init;
- (void)dealloc;
- (void)reset;
- (id)string;

@end
