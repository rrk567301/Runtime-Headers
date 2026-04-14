@interface GEOTelephonyInfo : NSObject

+ (id)sharedInfo;
+ (BOOL)hasCellularCapability;

- (id)init;
- (id)cellularCarrierIfAvailable;
- (id)isDeviceAuthorizedForCellularIfAvailable;
- (void)isMapsAuthorizedForCellular:(id)a0 result:(id /* block */)a1;
- (id)isMapsAuthorizedForCellularIfAvailable;
- (void)_updateMapsAuthed;
- (int)cellularDataStateIfAvailable;

@end
