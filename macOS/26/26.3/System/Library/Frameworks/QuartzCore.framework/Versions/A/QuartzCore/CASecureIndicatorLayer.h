@class NSString, NSArray;

@interface CASecureIndicatorLayer : CALayer

@property (copy) NSString *privacyIndicatorType;
@property double glyphScale;
@property (readonly) NSArray *validPositions;
@property (readonly) NSArray *validDynamicPositions;

@end
