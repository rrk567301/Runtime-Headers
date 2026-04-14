@class NSMutableDictionary;

@interface _TVRCRapportDeviceManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *deviceRecords;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)_checkIfDuplicateNameButDifferentIDSIdentifier:(id)a0 device:(id)a1;
- (id)_identifierForDevice:(id)a0;
- (BOOL)createOrUpdateRecordForDevice:(id)a0;
- (id)recordForDevice:(id)a0;
- (BOOL)removeDeviceRecordForDevice:(id)a0;

@end
