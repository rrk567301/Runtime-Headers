@class NSKeyValueDependencyContext;

@interface NSKeyValueDependency : NSObject

@property (readonly, getter=isValid) BOOL valid;
@property (retain) NSKeyValueDependencyContext *context;
@property unsigned long long invalidationCount;

- (void)invalidate;
- (id)initWithContext:(id)a0;
- (id)description;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithContext:(id)a0 invalidationCount:(unsigned long long)a1;

@end
