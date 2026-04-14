@class NSString, NSObject;
@protocol OS_os_log;

@interface SKDLog : NSObject

@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;

- (void).cxx_destruct;
- (id)initWithCategory:(id)a0;

@end
