@class NSMutableString, NSMutableDictionary;

@interface PBTextWriter : NSObject {
    BOOL _newlinesPrinted;
    long long _indent;
    NSMutableString *_dest;
    NSMutableDictionary *_cachedObjectTypes;
}

- (void)reset;
- (void)dealloc;
- (id)string;
- (id)init;
- (BOOL)write:(id)a0;

@end
