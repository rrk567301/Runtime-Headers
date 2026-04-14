@class NSString, NSURL;

@interface IRDataContainer : NSObject

@property (retain, nonatomic) NSString *persona;
@property (retain, nonatomic) NSURL *containerBaseURL;
@property (nonatomic) long long extensionHandle;

+ (id)containerForPersona:(id)a0;
+ (id)containerForPrimaryPersona;

- (id)description;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_initWithPersona:(id)a0;

@end
