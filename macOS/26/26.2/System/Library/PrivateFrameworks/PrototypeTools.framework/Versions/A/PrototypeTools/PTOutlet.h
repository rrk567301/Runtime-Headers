@class NSMutableDictionary;

@interface PTOutlet : NSObject <NSSecureCoding> {
    unsigned long long _nextToken;
    NSMutableDictionary *_actionsByToken;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_invokeActions;
- (id)addAction:(id /* block */)a0;
- (id)_init;
- (void).cxx_destruct;
- (void)removeActionForToken:(id)a0;

@end
