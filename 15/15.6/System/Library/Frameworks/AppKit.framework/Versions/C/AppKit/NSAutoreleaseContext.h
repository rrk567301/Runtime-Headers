@class NSData;

@interface NSAutoreleaseContext : NSObject

@property (class, readonly) NSAutoreleaseContext *currentContext;

@property (readonly, copy) NSData *backtraceData;

- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (char)isEqualToContext:(id)a0;

@end
