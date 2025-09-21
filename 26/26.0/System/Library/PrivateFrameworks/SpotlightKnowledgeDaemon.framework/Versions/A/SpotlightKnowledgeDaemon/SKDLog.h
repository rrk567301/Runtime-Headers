@class NSString, NSObject;
@protocol OS_os_log;

@interface SKDLog : NSObject

@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;

- (id)initWithCategory:(id)a0;
- (void).cxx_destruct;

@end
