@class NSMutableDictionary;

@interface PTOutlet : NSObject <NSSecureCoding> {
    unsigned long long _nextToken;
    NSMutableDictionary *_actionsByToken;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)_invokeActions;
- (void)removeActionForToken:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)addAction:(id /* block */)a0;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
