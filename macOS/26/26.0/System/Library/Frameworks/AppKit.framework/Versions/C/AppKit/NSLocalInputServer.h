@class NSMutableDictionary;

@interface NSLocalInputServer : NSInputServer {
    NSMutableDictionary *_dictionary;
}

- (void)dealloc;
- (id)initWithDelegate:(id)a0 name:(id)a1;
- (id)mutableDictionary;
- (void)setMutableDictionary:(id)a0;

@end
