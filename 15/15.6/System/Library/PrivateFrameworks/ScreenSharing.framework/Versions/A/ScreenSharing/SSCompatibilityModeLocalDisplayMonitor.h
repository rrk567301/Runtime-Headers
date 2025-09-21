@class NSError, NSString;

@interface SSCompatibilityModeLocalDisplayMonitor : NSObject <SSLocalDisplayMonitoring>

@property (readonly, nonatomic) char supportsHDRVideoReferencePreset;
@property (readonly, nonatomic) char isHDRVideoReferencePresetSelected;
@property (readonly, nonatomic) NSError *hdrUnavailableError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
