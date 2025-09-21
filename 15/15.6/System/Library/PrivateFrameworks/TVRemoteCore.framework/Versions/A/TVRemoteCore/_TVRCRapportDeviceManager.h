@class NSMutableDictionary;

@interface _TVRCRapportDeviceManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *deviceImplMap;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)_checkIfDuplicateNameButDifferentIDSIdentifier:(id)a0 linkDevice:(id)a1;
- (id)_identifierForDevice:(id)a0;
- (char)createOrUpdateDeviceImplForLinkDevice:(id)a0;
- (id)deviceImplForLinkDevice:(id)a0;
- (char)removeDeviceImplForLinkDevice:(id)a0;

@end
