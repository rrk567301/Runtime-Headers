@class NSURL;

@interface SSREnrollmentUtterance : NSObject

@property (readonly, nonatomic) NSURL *enrollmentUtteranceUrl;
@property (readonly, nonatomic) BOOL isExplicit;
@property (readonly, nonatomic) unsigned long long triggerPhrase;

- (void).cxx_destruct;
- (id)initWithEnrollmentUtteranceUrl:(id)a0;

@end
