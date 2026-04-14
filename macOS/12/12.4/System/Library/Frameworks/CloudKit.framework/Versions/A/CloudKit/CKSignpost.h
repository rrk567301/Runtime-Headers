@class NSObject;
@protocol OS_os_log;

@interface CKSignpost : NSObject

@property (readonly) NSObject<OS_os_log> *log;
@property (readonly) unsigned long long identifier;

+ (id)developerSignpost;
+ (id)signpost;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLog:(id)a0;

@end
