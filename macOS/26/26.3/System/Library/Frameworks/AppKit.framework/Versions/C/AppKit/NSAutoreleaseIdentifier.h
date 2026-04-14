@class NSAutoreleaseContext;

@interface NSAutoreleaseIdentifier : NSObject

@property (readonly) id receiver;
@property (readonly) NSAutoreleaseContext *context;

- (BOOL)isEqualToIdentifier:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithReceiver:(id)a0 context:(id)a1;

@end
