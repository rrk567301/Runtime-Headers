@class NSMutableDictionary;

@interface PTOutlet : NSObject <NSSecureCoding> {
    unsigned long long _nextToken;
    NSMutableDictionary *_actionsByToken;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)addAction:(id /* block */)a0;
- (void).cxx_destruct;
- (void)removeActionForToken:(id)a0;
- (void)_invokeActions;
- (id)initWithCoder:(id)a0;

@end
