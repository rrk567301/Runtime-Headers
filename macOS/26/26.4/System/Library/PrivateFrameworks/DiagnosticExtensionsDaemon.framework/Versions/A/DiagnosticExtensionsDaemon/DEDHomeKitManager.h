@class NSString;

@interface DEDHomeKitManager : NSObject

@property (readonly) NSString *homeKitIdentifier;
@property (readonly) NSString *homeTheaterSystemName;
@property (readonly) NSString *homeTheaterSystemIdentifier;

+ (id)sharedInstance;

- (BOOL)isHomeKitResident;
- (void)start;

@end
