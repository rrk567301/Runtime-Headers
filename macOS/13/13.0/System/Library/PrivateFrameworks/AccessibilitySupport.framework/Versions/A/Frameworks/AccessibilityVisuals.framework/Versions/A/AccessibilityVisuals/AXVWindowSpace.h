@class NSString;

@interface AXVWindowSpace : NSObject

@property (class, readonly) AXVWindowSpace *sharedSpaceAtDefaultLevel;
@property (class, readonly) AXVWindowSpace *sharedSpaceAtVoiceOverLevel;
@property (class, readonly) AXVWindowSpace *sharedSpaceAtSetupAssistantLevel;

@property (nonatomic) unsigned int _cgsMainConnection;
@property (nonatomic) unsigned long long _spaceID;
@property (nonatomic) BOOL _wasSpaceCreatedByThisProcess;
@property (readonly, nonatomic) unsigned long long level;
@property (readonly, copy, nonatomic) NSString *uuid;

+ (id)existingSpaceWithUUID:(id)a0;
+ (unsigned long long)_spaceIDForSpaceUUID:(id)a0 createIfNonExistant:(BOOL)a1;
+ (unsigned long long)_spaceLevelForSpaceID:(unsigned long long)a0;
+ (int)_slsSpaceAbsoluteLevelFromAXVWindowSpaceLevel:(unsigned long long)a0;
+ (unsigned long long)_axvWindowSpaceLevelFromSLSSpaceAbsoluteLevel:(int)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)hide;
- (void)show;
- (void)addWindow:(id)a0;
- (void)removeWindow:(id)a0;
- (void)addWindows:(id)a0;
- (void)removeWindows:(id)a0;
- (id)_initWithSpaceUUID:(id)a0 spaceID:(unsigned long long)a1;
- (id)_initWithWindowSpaceLevel:(unsigned long long)a0;

@end
