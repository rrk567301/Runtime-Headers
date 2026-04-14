@class NSMutableDictionary;

@interface _TVRCRapportDeviceManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *deviceImplMap;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)_checkIfDuplicateNameButDifferentIDSIdentifier:(id)a0 linkDevice:(id)a1;
- (id)_identifierForDevice:(id)a0;
- (BOOL)createOrUpdateDeviceImplForLinkDevice:(id)a0;
- (id)deviceImplForLinkDevice:(id)a0;
- (BOOL)removeDeviceImplForLinkDevice:(id)a0;

@end
