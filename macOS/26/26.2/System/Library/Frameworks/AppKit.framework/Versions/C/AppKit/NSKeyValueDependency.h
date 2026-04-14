@class NSKeyValueDependencyContext;

@interface NSKeyValueDependency : NSObject

@property (readonly, getter=isValid) BOOL valid;
@property (retain) NSKeyValueDependencyContext *context;
@property unsigned long long invalidationCount;

- (void)invalidate;
- (unsigned long long)hash;
- (id)initWithContext:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithContext:(id)a0 invalidationCount:(unsigned long long)a1;

@end
