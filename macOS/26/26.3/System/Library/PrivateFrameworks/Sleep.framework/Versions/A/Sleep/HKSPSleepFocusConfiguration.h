@class NSUUID, NSString;

@interface HKSPSleepFocusConfiguration : NSObject <BSDescriptionProviding, NAEquatable, NAHashable>

@property (readonly, nonatomic) BOOL hasSleepFocusMode;
@property (readonly, copy, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) BOOL mirrorsFocusModes;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)readFromDefaults:(id)a0;
+ (unsigned long long)defaultConfigurationState;

- (id)copy;
- (id)succinctDescriptionBuilder;
- (void)writeToDefaults:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)sleepFocusConfigurationUpdatingMirrorsFocusModes:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (id)sleepFocusConfigurationUpdatingUUID:(id)a0 state:(unsigned long long)a1;
- (id)initWithUUID:(id)a0 mirrorsFocusModes:(BOOL)a1 state:(unsigned long long)a2;

@end
