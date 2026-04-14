@class STUIPolicyMessageInfo;

@interface STRegulatoryContentPrivacyRestrictionsPolicy : NSObject

@property (retain) STUIPolicyMessageInfo *guardianSignInReason;
@property BOOL topLevelRestrictionsForcedToEnabled;

- (void).cxx_destruct;
- (id)init;

@end
