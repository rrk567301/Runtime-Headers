@class NSObject;
@protocol OS_os_log;

@interface CKSignpost : NSObject

@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) unsigned long long identifier;

+ (id)signpost;

- (void).cxx_destruct;
- (id)initWithLog:(id)a0;
- (id)init;

@end
