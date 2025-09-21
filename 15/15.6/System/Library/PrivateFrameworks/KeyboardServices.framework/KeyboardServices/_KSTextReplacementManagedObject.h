@class NSString, NSData, NSDate;

@interface _KSTextReplacementManagedObject : NSManagedObject

@property (retain, nonatomic) NSString *phrase;
@property (retain, nonatomic) NSString *shortcut;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSData *remoteRecordInfo;
@property (nonatomic) char needsSaveToCloud;
@property (nonatomic) char wasDeleted;
@property (retain, nonatomic) NSString *uniqueName;

@end
