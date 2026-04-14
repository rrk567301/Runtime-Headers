@class NSString, NSArray;

@interface CRFDRMac1DeviceHandler : CRFDRBaseDeviceHandler

@property (retain, nonatomic) NSString *KBBMLBSerialNumber;
@property (retain, nonatomic) NSString *KBBSrNm;
@property (retain, nonatomic) NSArray *makePropertiesArray;

+ (id)getDeviceHandlerForProductType:(int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_isMLBRepair:(id)a0;
- (void)_updateMetadataWithPartSPC:(id)a0 fdrRemote:(struct __AMFDR { } *)a1;
- (id)getClaimDataClassesAndInstancesWithPartSPC:(id)a0;
- (id)getExcludedPropertiesForFactoryReset;
- (BOOL)getMakeDataClassesAndInstancesWithPartSPC:(id)a0 fdrRemote:(struct __AMFDR { } *)a1 makeClasses:(id *)a2 makeInstances:(id *)a3 makePropertiesDict:(id *)a4 fdrError:(id *)a5;
- (id)getMakeDataClassesAndInstancesWithPartSPC:(id)a0 fdrRemote:(struct __AMFDR { } *)a1 makePropertiesDict:(id *)a2 fdrError:(id *)a3;
- (id)spcWithComponent:(id)a0 withIdentifier:(id)a1;
- (BOOL)supportMSRk;
- (BOOL)transferFGSNFromKBB;
- (BOOL)validateAndSetSerialNumbersUsingPartSPC:(id)a0 KGBSerialNumber:(id)a1 KBBSerialNumber:(id)a2 withError:(id *)a3;

@end
