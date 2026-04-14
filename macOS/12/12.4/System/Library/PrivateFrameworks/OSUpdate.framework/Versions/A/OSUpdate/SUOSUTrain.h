@class NSString, NSMutableArray;

@interface SUOSUTrain : NSObject

@property (retain) NSString *trainName;
@property (retain) NSMutableArray *servers;
@property (readonly) NSString *minimumProductVersion;
@property (readonly) NSString *maximumProductVersion;

- (void).cxx_destruct;
- (id)initWithInfoDictionaryV2:(id)a0;
- (id)initWithInfoArray:(id)a0 trainName:(id)a1;

@end
