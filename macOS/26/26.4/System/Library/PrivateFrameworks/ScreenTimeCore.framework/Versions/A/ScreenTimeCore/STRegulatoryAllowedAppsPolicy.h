@class NSArray, STUIPolicyMessageInfo;

@interface STRegulatoryAllowedAppsPolicy : NSObject

@property (retain) STUIPolicyMessageInfo *appsRatingFooterInfo;
@property (copy) NSArray *valueChangePrompts;
@property BOOL showsFullList;
@property BOOL appsRatingEditable;
@property BOOL appsRatingForcedToDoNotAllow;

- (void).cxx_destruct;
- (id)init;

@end
