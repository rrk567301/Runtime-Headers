@class MKFCKAppleMediaAccessory;

@interface MKFCKAppleMediaAccessoryResident : MKFCKResident

@property (retain, nonatomic) MKFCKAppleMediaAccessory *accessory;

+ (id)fetchRequest;

- (BOOL)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (BOOL)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;

@end
