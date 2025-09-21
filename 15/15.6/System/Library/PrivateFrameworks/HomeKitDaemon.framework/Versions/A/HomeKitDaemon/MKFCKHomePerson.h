@class NSUUID, MKFCKHome, MKFCKPhotosPerson;

@interface MKFCKHomePerson : MKFCKPerson

@property (copy, nonatomic) NSUUID *linkedSharedPhotosPersonModelID;
@property (retain, nonatomic) MKFCKHome *home;
@property (retain, nonatomic) MKFCKPhotosPerson *linkedPhotosPerson;

+ (id)fetchRequest;

- (char)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (char)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;

@end
