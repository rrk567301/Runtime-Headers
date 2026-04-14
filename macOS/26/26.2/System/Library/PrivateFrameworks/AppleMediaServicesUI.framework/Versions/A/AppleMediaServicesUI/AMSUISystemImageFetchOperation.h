@class NSString, NSNumber;

@interface AMSUISystemImageFetchOperation : AMSUIAssetFetchOperation

@property (retain) NSString *imageName;
@property (retain) NSString *accessibilityDescription;
@property (retain) NSNumber *variableValue;

- (void)main;
- (void).cxx_destruct;
- (BOOL)isLowLatency;
- (id)initWithSystemImageName:(id)a0 variableValue:(id)a1 accessibilityDescription:(id)a2;

@end
