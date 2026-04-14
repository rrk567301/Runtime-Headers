@class NSString, NSURL;

@interface IRDataContainer : NSObject

@property (retain, nonatomic) NSString *persona;
@property (retain, nonatomic) NSURL *containerBaseURL;
@property (nonatomic) long long extensionHandle;

+ (id)containerForPersona:(id)a0;
+ (id)containerForPrimaryPersona;

- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)_initWithPersona:(id)a0;

@end
