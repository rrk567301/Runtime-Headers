@class NSUUID, NSString, NSDate;

@interface MKFCKPerson : MKFCKHomeObject

@property (copy, nonatomic) NSUUID *flags;
@property (copy, nonatomic) NSUUID *homeModelID;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;

+ (id)fetchRequest;

- (char)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (char)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;

@end
