@class NSString, SimDevice;

@interface OSLogDevice : NSObject

@property (nonatomic) long long devType;
@property (nonatomic) void *mobDev;
@property (retain, nonatomic) SimDevice *simDev;
@property (retain, nonatomic) NSString *uid;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMobileDevice:(void *)a0 andID:(id)a1;
- (id)initWithSimualatedDevice:(id)a0;

@end
