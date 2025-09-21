@class MKFCKAppleMediaAccessory, NSUUID, NSString, MKFCKHome, NSDate;

@interface MKFCKResident : MKFCKHomeObject

@property (copy, nonatomic) NSUUID *flags;
@property (copy, nonatomic) NSUUID *homeModelID;
@property (copy, nonatomic) NSUUID *idsIdentifier;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;
@property (retain, nonatomic) MKFCKAppleMediaAccessory *appleMediaAccessory;
@property (retain, nonatomic) MKFCKHome *home;

+ (id)fetchRequest;

- (char)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (char)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;

@end
