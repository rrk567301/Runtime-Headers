@class NSString, NSLocale;

@interface SCMLPeopleDetectorConfiguration : NSObject

@property (retain, nonatomic) NSLocale *locale;
@property (nonatomic) int onBehalfOfProcessID;
@property (copy, nonatomic) NSString *modelManagerServicesUseCaseID;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithModelManagerServicesUseCaseID:(id)a0;

@end
