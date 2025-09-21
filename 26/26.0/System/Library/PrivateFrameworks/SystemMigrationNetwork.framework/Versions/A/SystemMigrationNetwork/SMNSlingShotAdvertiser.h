@class NSNetService;

@interface SMNSlingShotAdvertiser : NSObject

@property (retain) NSNetService *netService;

+ (id)createSlingShotServiceWithName:(id)a0 isWindows:(BOOL)a1;

- (void)start;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 isWindows:(BOOL)a1;

@end
