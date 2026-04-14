@class NSData;

@interface GKCDContactInfoList : NSManagedObject

@property (retain, nonatomic) NSData *changeHistoryToken;

+ (id)fetchRequest;

@end
