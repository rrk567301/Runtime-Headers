@class CRRecentContactsLibrary;

@interface IMDCoreSpotlightDispatchObject : NSObject

@property (retain, nonatomic) CRRecentContactsLibrary *recentsInstance;
@property (nonatomic) char allowsOverrideOfObjects;
@property (nonatomic) char shouldAddToSuggestions;
@property (nonatomic) char shouldAddToSpotlight;
@property (nonatomic) char shouldAddToCoreRecents;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;

@end
