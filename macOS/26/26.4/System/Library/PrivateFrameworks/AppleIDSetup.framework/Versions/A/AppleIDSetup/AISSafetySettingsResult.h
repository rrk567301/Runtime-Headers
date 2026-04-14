@class NSString;

@interface AISSafetySettingsResult : NSObject

@property (nonatomic, readonly) BOOL isSafetySettingsApplied;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (id)initWithIsSafetySettingsApplied:(BOOL)a0;

@end
