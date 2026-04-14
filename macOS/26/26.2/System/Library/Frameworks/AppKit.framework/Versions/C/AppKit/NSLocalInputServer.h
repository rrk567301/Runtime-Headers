@class NSMutableDictionary;

@interface NSLocalInputServer : NSInputServer {
    NSMutableDictionary *_dictionary;
}

- (id)initWithDelegate:(id)a0 name:(id)a1;
- (void)dealloc;
- (id)mutableDictionary;
- (void)setMutableDictionary:(id)a0;

@end
