@class NSString, NSMutableArray;

@interface SUOSUTrain : NSObject

@property (retain) NSString *trainName;
@property (retain) NSMutableArray *servers;
@property (readonly) NSString *minimumProductVersion;
@property (readonly) NSString *maximumProductVersion;

- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)initWithInfoArray:(id)a0 trainName:(id)a1;
- (id)initWithInfoDictionaryV2:(id)a0;

@end
