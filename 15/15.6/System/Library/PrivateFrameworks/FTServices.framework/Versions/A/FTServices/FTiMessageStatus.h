@class FTServiceStatus;

@interface FTiMessageStatus : NSObject

@property (readonly, nonatomic) FTServiceStatus *serviceStatus;
@property (readonly, nonatomic) char iMessageSupported;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)initPrivate;

@end
