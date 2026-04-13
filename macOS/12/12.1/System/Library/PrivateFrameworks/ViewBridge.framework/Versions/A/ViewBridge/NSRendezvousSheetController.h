@class NSString;

@interface NSRendezvousSheetController : NSRendezvousWindowController {
    unsigned char _sheetControllerInvalid : 1;
}

@property (readonly) NSString *parentIdentifier;

+ (unsigned long long)acceptableStyleMask;

- (void)invalidate;
- (void)setView:(id)a0;

@end
