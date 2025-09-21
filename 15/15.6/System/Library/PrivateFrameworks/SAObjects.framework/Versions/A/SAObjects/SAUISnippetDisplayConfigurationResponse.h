@class NSString, SAUISize;

@interface SAUISnippetDisplayConfigurationResponse : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char accessibilityDifferentiateWithoutColor;
@property (nonatomic) char accessibilityInvertColors;
@property (nonatomic) char accessibilityReduceMotion;
@property (nonatomic) char accessibilityReduceTransparency;
@property (copy, nonatomic) NSString *displayColorScheme;
@property (copy, nonatomic) NSString *displayContrast;
@property (copy, nonatomic) NSString *displayGamut;
@property (copy, nonatomic) NSString *dynamicTypeSize;
@property (retain, nonatomic) SAUISize *estimatedVisibleSnippetDisplaySize;
@property (copy, nonatomic) NSString *textDirection;
@property (copy, nonatomic) NSString *textLegibilityWeight;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
