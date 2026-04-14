@class NSString, WFMatchedAppIconColorData;

@interface WFAppIconColorMatcher : NSObject

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) WFMatchedAppIconColorData *cachedColor;

- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)matchedColor;

@end
