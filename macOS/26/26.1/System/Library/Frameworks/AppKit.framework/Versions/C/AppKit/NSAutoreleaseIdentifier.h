@class NSAutoreleaseContext;

@interface NSAutoreleaseIdentifier : NSObject

@property (readonly) id receiver;
@property (readonly) NSAutoreleaseContext *context;

- (unsigned long long)hash;
- (BOOL)isEqualToIdentifier:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithReceiver:(id)a0 context:(id)a1;

@end
