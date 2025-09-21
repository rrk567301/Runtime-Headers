@class NSKeyValueDependencyContext;

@interface NSKeyValueDependency : NSObject

@property (readonly, getter=isValid) BOOL valid;
@property (retain) NSKeyValueDependencyContext *context;
@property unsigned long long invalidationCount;

- (id)initWithContext:(id)a0;
- (void)dealloc;
- (void)invalidate;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithContext:(id)a0 invalidationCount:(unsigned long long)a1;

@end
