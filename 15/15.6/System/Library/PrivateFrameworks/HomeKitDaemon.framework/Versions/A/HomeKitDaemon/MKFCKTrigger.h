@class MKFCKHome, NSString, NSUUID, NSSet, NSDate;

@interface MKFCKTrigger : MKFCKHomeObject

@property (nonatomic) char autoDelete;
@property (copy, nonatomic) NSString *configuredName;
@property (nonatomic) char enabled;
@property (nonatomic) char executeOnce;
@property (copy, nonatomic) NSUUID *flags;
@property (copy, nonatomic) NSUUID *homeModelID;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;
@property (retain, nonatomic) MKFCKHome *home;
@property (retain, nonatomic) NSSet *scenes;

+ (id)fetchRequest;

- (char)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (char)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;

@end
