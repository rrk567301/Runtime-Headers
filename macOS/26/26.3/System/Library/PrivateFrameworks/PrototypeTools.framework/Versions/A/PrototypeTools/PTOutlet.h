@class NSMutableDictionary;

@interface PTOutlet : NSObject <NSSecureCoding> {
    unsigned long long _nextToken;
    NSMutableDictionary *_actionsByToken;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)removeActionForToken:(id)a0;
- (void)_invokeActions;
- (id)_init;
- (void).cxx_destruct;
- (id)addAction:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
