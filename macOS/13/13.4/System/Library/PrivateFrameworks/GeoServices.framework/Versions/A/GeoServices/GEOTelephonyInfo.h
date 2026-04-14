@interface GEOTelephonyInfo : NSObject

+ (id)sharedInfo;
+ (BOOL)hasCellularCapability;

- (id)init;
- (void)_updateMapsAuthed;
- (id)cellularCarrierIfAvailable;
- (int)cellularDataStateIfAvailable;
- (id)isDeviceAuthorizedForCellularIfAvailable;
- (void)isMapsAuthorizedForCellular:(id)a0 result:(id /* block */)a1;
- (id)isMapsAuthorizedForCellularIfAvailable;

@end
