@class NSData;

@interface NSAutoreleaseContext : NSObject

@property (class, readonly) NSAutoreleaseContext *currentContext;

@property (readonly, copy) NSData *backtraceData;

- (void)dealloc;
- (id)init;
- (BOOL)isEqualToContext:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
