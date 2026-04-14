@class NSThread, NSAutoreleaseIdentifier;

@interface NSAutoreleaseProxy : NSObject

@property (readonly) NSThread *initialThread;
@property (readonly) NSAutoreleaseIdentifier *identifier;

- (id)initWithIdentifier:(id)a0;
- (void)dealloc;

@end
