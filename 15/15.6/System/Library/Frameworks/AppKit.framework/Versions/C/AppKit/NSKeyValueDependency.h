@class NSKeyValueDependencyContext;

@interface NSKeyValueDependency : NSObject

@property (readonly, getter=isValid) char valid;
@property (retain) NSKeyValueDependencyContext *context;
@property unsigned long long invalidationCount;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)invalidate;
- (id)initWithContext:(id)a0;
- (id)initWithContext:(id)a0 invalidationCount:(unsigned long long)a1;

@end
