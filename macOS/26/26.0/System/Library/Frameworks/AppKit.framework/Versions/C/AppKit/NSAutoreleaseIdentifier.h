@class NSAutoreleaseContext;

@interface NSAutoreleaseIdentifier : NSObject

@property (readonly) id receiver;
@property (readonly) NSAutoreleaseContext *context;

- (void)dealloc;
- (BOOL)isEqualToIdentifier:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithReceiver:(id)a0 context:(id)a1;

@end
