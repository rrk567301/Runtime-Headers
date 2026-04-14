@class NSString;

@interface NSRendezvousSheetController : NSRendezvousWindowController

@property (readonly) NSString *parentIdentifier;

+ (unsigned long long)acceptableStyleMask;

- (void)invalidate;
- (void)setView:(id)a0;

@end
