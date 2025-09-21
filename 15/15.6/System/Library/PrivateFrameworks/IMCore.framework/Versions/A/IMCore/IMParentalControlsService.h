@class NSSet, NSString;

@interface IMParentalControlsService : NSObject

@property char disableService;
@property char forceAllowlist;
@property (retain) NSSet *allowlist;
@property (retain) NSString *name;

- (void)dealloc;
- (void).cxx_destruct;

@end
