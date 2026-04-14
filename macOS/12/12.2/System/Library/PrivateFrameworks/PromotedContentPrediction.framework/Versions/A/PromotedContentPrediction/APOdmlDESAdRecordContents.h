@class NSNumber, NSString, NSMutableDictionary;

@interface APOdmlDESAdRecordContents : NSObject

@property (retain, nonatomic) NSNumber *originalIndex;
@property (readonly, nonatomic) NSString *instanceID;
@property (retain, nonatomic) NSMutableDictionary *odmlData;
@property (retain, nonatomic) NSString *responseType;

- (void).cxx_destruct;

@end
