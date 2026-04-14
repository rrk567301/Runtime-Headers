@class NSDictionary, NSMutableArray;

@interface PMPPDPopUpButton : NSPopUpButton {
    NSMutableArray *_drivers;
    NSMutableArray *_otherPPDs;
    NSDictionary *_genericPPD;
    NSDictionary *_genericPCLPPD;
    NSDictionary *_faxPPD;
}

- (void)dealloc;
- (void)awakeFromNib;
- (id)drivers;
- (void)stopTracking:(id)a0;
- (void)startTracking:(id)a0;
- (void)setDrivers:(id)a0;
- (id)faxPPDs;
- (BOOL)addItemWithDriver:(id)a0 tag:(int)a1 enabled:(BOOL)a2;
- (void)addItemsWithDrivers:(id)a0 tag:(int)a1;
- (void)addOtherPPD:(id)a0;
- (id)faxPPD;
- (id)genericPCLPPD;
- (id)genericPPD;
- (BOOL)hasManufacturersPPDs;
- (id)otherPPDs;
- (id)postscriptPPDs;
- (id)ppdManufacturers;
- (id)rasterPPDs;
- (id)represetedObjectAtSelection;
- (void)setDrivers:(id)a0 supportsAutoSelect:(BOOL)a1 supportsPostscript:(BOOL)a2 supportsPCL:(BOOL)a3 supportsFax:(BOOL)a4 selectStandardDefaults:(BOOL)a5;
- (void)setFaxPPD:(id)a0;
- (void)setGenericPCLPPD:(id)a0;
- (void)setGenericPPD:(id)a0;
- (void)setOtherPPDs:(id)a0;

@end
