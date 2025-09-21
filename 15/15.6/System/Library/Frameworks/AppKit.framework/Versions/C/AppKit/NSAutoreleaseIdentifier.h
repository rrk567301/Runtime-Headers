@class NSAutoreleaseContext;

@interface NSAutoreleaseIdentifier : NSObject

@property (readonly) id receiver;
@property (readonly) NSAutoreleaseContext *context;

- (void)dealloc;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithReceiver:(id)a0 context:(id)a1;
- (char)isEqualToIdentifier:(id)a0;

@end
