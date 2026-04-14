@class NSKeyValueDependencyContext;

@interface NSKeyValueDependency : NSObject

@property (readonly, getter=isValid) BOOL valid;
@property (retain) NSKeyValueDependencyContext *context;
@property unsigned long long invalidationCount;

- (id)initWithContext:(id)a0;
- (unsigned long long)hash;
- (void)invalidate;
- (id)description;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithContext:(id)a0 invalidationCount:(unsigned long long)a1;

@end
