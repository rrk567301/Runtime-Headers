@class CRRecentContactsLibrary;

@interface IMDCoreSpotlightDispatchObject : NSObject

@property (retain) CRRecentContactsLibrary *recentsInstance;
@property (nonatomic) BOOL allowsOverrideOfObjects;
@property (nonatomic) BOOL shouldAddToSuggestions;
@property (nonatomic) BOOL shouldAddToSpotlight;
@property (nonatomic) BOOL shouldAddToCoreRecents;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;

@end
