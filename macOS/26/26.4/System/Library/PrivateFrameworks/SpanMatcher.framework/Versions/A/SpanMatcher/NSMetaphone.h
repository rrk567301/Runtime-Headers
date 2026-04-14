@class NSMutableString;

@interface NSMetaphone : NSObject {
    NSMutableString *_primary;
    NSMutableString *_secondary;
    BOOL _isAlternate;
}

- (id)translate:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)init;
- (id)_translateWord:(id)a0;
- (void)_append:(id)a0;
- (void)_append:(id)a0 alt:(id)a1;

@end
