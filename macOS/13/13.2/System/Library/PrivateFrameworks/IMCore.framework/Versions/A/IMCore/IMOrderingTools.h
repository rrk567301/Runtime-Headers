@class NSString, NSMutableArray;

@interface IMOrderingTools : NSObject

@property (retain, nonatomic) NSString *jsonFilePath;
@property (retain, nonatomic) NSMutableArray *jsonArray;

- (void).cxx_destruct;
- (void)printChangeInItemsToJSON:(id)a0;
- (void)startTrackingChat:(id)a0;
- (id)pathToDirectoryOfJSONFile;
- (void)setUpJSONFileForChatGUID:(id)a0;
- (void)printChangeInItemsToJSONFromChat:(id)a0;
- (id)currentJsonArray;
- (void)writeDataToJSONFile:(id)a0;
- (id)messageDictionariesFromItemsInChat:(id)a0 withEventKey:(id)a1;

@end
