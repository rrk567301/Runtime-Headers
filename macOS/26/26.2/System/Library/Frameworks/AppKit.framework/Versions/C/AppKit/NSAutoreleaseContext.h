@class NSData;

@interface NSAutoreleaseContext : NSObject

@property (class, readonly) NSAutoreleaseContext *currentContext;

@property (readonly, copy) NSData *backtraceData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToContext:(id)a0;
- (id)init;
- (void)dealloc;

@end
