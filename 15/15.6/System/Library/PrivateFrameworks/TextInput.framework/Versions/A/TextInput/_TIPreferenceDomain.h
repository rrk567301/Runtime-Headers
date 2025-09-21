@class NSString;

@interface _TIPreferenceDomain : NSObject

@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSString *notification;
@property (nonatomic) char needsGetSync;
@property (nonatomic) char needsSetSync;
@property (nonatomic) double lastSynchronizedTime;

+ (id)domainWithName:(id)a0 notification:(id)a1;

- (void).cxx_destruct;

@end
