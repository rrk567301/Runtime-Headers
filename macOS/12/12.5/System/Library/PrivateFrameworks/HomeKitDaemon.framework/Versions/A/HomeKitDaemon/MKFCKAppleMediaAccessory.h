@class NSDictionary, NSNumber, MKFCKAppleMediaAccessoryResident;

@interface MKFCKAppleMediaAccessory : MKFCKMediaAccessory

@property (retain, nonatomic) NSDictionary *settings;
@property (copy, nonatomic) NSNumber *variant;
@property (retain, nonatomic) MKFCKAppleMediaAccessoryResident *resident;

+ (id)fetchRequest;

- (BOOL)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (BOOL)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (id)_encodeSettingGroup:(id)a0;

@end
