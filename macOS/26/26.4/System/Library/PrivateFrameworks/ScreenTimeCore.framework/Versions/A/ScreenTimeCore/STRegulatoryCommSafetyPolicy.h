@class NSString, STUIPolicyMessageInfo, NSArray;

@interface STRegulatoryCommSafetyPolicy : NSObject

@property (retain) STUIPolicyMessageInfo *footerInfo;
@property (retain) STUIPolicyMessageInfo *guardianSignInReason;
@property BOOL editable;
@property BOOL forcedToEnabled;
@property BOOL connectToFamilyBanner;
@property (copy) NSString *connectToFamilyBannerDescription;
@property (copy) NSArray *valueChangePrompts;

- (void).cxx_destruct;
- (id)init;

@end
