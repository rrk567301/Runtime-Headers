@class NSDictionary, NSString;

@interface SHDefaultConfigurationValues : NSObject

@property (readonly) NSDictionary *defaultValues;
@property (readonly) double recordingIntermission;
@property (readonly, copy) NSString *campaignGroup;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;

@end
