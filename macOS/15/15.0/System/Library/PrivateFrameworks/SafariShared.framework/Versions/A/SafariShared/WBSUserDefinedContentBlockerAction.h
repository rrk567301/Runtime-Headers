@class NSString, NSArray, NSSet, WBSUserDefinedContentBlockerCrossSiteContent;

@interface WBSUserDefinedContentBlockerAction : NSObject

@property (readonly, nonatomic) long long databaseID;
@property (retain, nonatomic) NSString *selector;
@property (retain, nonatomic) NSString *typeString;
@property (readonly, nonatomic) long long crossSiteContentID;
@property (retain, nonatomic) WBSUserDefinedContentBlockerCrossSiteContent *crossSiteContentCandidate;
@property (copy, nonatomic) NSString *renderTreeText;
@property (copy, nonatomic) NSString *imageAnalysisText;
@property (copy, nonatomic) NSString *searchableText;
@property (copy, nonatomic) NSString *screenReaderText;
@property (readonly, nonatomic) NSArray *selectorsForStyleSheetRules;
@property (retain, nonatomic) NSArray *allSelectorsIncludingShadowHosts;
@property (retain, nonatomic) NSSet *mediaAndLinkURLs;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (nonatomic) long long positionType;
@property (nonatomic) unsigned long long edgeAnchors;
@property (nonatomic) struct { double left; double top; double right; double bottom; } edgeInsets;
@property (nonatomic) double viewZoomScale;

- (id)debugDescription;
- (void).cxx_destruct;
- (void)_readExtraAttributesWithData:(id)a0;
- (id)extraAttributesData;
- (id)initWithDatabaseID:(long long)a0 selector:(id)a1 type:(id)a2 crossSiteContentID:(long long)a3 extraAttributesData:(id)a4;
- (id)initWithSelector:(id)a0 type:(id)a1;
- (BOOL)isEquivalentToAction:(id)a0;

@end
