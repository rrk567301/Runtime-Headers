@class NSNetService;

@interface SMNSlingShotAdvertiser : NSObject

@property (retain) NSNetService *netService;

+ (id)createSlingShotServiceWithName:(id)a0 isWindows:(char)a1;

- (void).cxx_destruct;
- (void)start;
- (id)initWithName:(id)a0 isWindows:(char)a1;

@end
