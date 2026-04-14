@class NSData;

@interface NSAutoreleaseContext : NSObject

@property (class, readonly) NSAutoreleaseContext *currentContext;

@property (readonly, copy) NSData *backtraceData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqualToContext:(id)a0;
- (void)dealloc;

@end
