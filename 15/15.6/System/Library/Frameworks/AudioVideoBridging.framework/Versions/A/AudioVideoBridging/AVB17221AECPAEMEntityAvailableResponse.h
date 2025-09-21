@interface AVB17221AECPAEMEntityAvailableResponse : AVB17221AECPAEMMessage

@property (nonatomic) char entityAcquired;
@property (nonatomic) char entityLocked;
@property (nonatomic) char subentityAcquired;
@property (nonatomic) char subentityLocked;
@property (nonatomic) unsigned long long acquiredControllerID;
@property (nonatomic) unsigned long long lockedControllerID;
@property (readonly, nonatomic) char messageIs2013Format;

+ (id)commandMessage;
+ (id)keyPathsForValuesAffectingAcquiredControllerID;
+ (id)keyPathsForValuesAffectingEntityAcquired;
+ (id)keyPathsForValuesAffectingEntityLocked;
+ (id)keyPathsForValuesAffectingLockedControllerID;
+ (id)keyPathsForValuesAffectingMessageIs2013Format;
+ (id)keyPathsForValuesAffectingSubentityAcquired;
+ (id)keyPathsForValuesAffectingSubentityLocked;

- (id)init;
- (char)subentityLocked;
- (unsigned long long)acquiredControllerID;
- (char)entityAcquired;
- (char)entityLocked;
- (unsigned long long)lockedControllerID;
- (char)messageIs2013Format;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (unsigned long long)minimumReceivedCommandSpecificLength;
- (void)setAcquiredControllerID:(unsigned long long)a0;
- (void)setEntityAcquired:(char)a0;
- (void)setEntityLocked:(char)a0;
- (void)setLockedControllerID:(unsigned long long)a0;
- (void)setSubentityAcquired:(char)a0;
- (void)setSubentityLocked:(char)a0;
- (char)subentityAcquired;

@end
