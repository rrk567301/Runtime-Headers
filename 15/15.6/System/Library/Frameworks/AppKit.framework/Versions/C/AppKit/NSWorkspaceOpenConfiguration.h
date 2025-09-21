@class NSDictionary, NSArray, NSAppleEventDescriptor;

@interface NSWorkspaceOpenConfiguration : NSObject <NSCopying>

@property (copy, setter=_setAdditionalLSOpenOptions:) NSDictionary *_additionalLSOpenOptions;
@property char promptsUserIfNeeded;
@property char addsToRecentItems;
@property char activates;
@property char hides;
@property char hidesOthers;
@property (getter=isForPrinting) char forPrinting;
@property char createsNewApplicationInstance;
@property char allowsRunningApplicationSubstitution;
@property (copy) NSArray *arguments;
@property (copy) NSDictionary *environment;
@property (retain) NSAppleEventDescriptor *appleEvent;
@property int architecture;
@property char requiresUniversalLinks;

+ (id)configuration;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
