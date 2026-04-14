@class NSData, NSString;

@interface IMKSimulatorKeyboardInterpreter : NSObject

@property (retain, nonatomic) NSData *keyboardLayoutData;
@property (retain, nonatomic) NSString *keyboardLayoutIdentifier;

+ (id)sharedKeyboardInterpreter;

- (void)dealloc;
- (void)rebuildKeyboardCache;
- (id)modifiedEvent:(id)a0;

@end
