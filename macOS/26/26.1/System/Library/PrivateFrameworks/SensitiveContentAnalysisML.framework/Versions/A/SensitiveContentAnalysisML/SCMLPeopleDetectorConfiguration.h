@class NSString, NSLocale;

@interface SCMLPeopleDetectorConfiguration : NSObject

@property (retain, nonatomic) NSLocale *locale;
@property (nonatomic) int onBehalfOfProcessID;
@property (copy, nonatomic) NSString *modelManagerServicesUseCaseID;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithModelManagerServicesUseCaseID:(id)a0;

@end
