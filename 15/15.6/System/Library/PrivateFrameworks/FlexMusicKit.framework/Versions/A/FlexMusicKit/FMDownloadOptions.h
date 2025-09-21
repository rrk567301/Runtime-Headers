@interface FMDownloadOptions : NSObject

@property (nonatomic) char allowsCellular;
@property (nonatomic) unsigned long long downloadPriority;

- (id)description;
- (id)init;
- (void)_configureDefaults;

@end
