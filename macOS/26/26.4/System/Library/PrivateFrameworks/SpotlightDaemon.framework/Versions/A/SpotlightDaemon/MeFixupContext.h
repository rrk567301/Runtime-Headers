@class NSString, NSDictionary, NSMutableDictionary, NSMutableArray;

@interface MeFixupContext : NSObject

@property (retain, nonatomic) NSDictionary *meCardDict;
@property (retain, nonatomic) NSString *meCardPath;
@property (nonatomic) int debug;
@property (retain, nonatomic) NSMutableDictionary *nameQueryDict;
@property (retain, nonatomic) NSMutableArray *queries;
@property (retain, nonatomic) NSString *nameQueryFilePath;
@property (retain, nonatomic) NSString *queryFilePath;
@property (retain, nonatomic) NSString *dataclass;

- (void).cxx_destruct;
- (id)init;

@end
