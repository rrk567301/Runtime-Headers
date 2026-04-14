@class NSMutableString;

@interface NSMetaphone : NSObject {
    NSMutableString *_primary;
    NSMutableString *_secondary;
    BOOL _isAlternate;
}

- (void)reset;
- (void).cxx_destruct;
- (id)translate:(id)a0;
- (id)init;
- (id)_translateWord:(id)a0;
- (void)_append:(id)a0;
- (void)_append:(id)a0 alt:(id)a1;

@end
