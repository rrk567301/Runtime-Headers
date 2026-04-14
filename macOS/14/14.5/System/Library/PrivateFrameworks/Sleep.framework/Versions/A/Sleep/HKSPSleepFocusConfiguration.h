@class NSUUID, NSString;

@interface HKSPSleepFocusConfiguration : NSObject <BSDescriptionProviding, NAEquatable, NAHashable>

@property (readonly, nonatomic) BOOL hasSleepFocusMode;
@property (readonly, copy, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) BOOL mirrorsFocusModes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)readFromDefaults;

- (id)copy;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)writeToDefaults;
- (id)initWithUUID:(id)a0 mirrorsFocusModes:(BOOL)a1;
- (id)sleepFocusConfigurationUpdatingMirrorsFocusModes:(BOOL)a0;
- (id)sleepFocusConfigurationUpdatingUUID:(id)a0;

@end
