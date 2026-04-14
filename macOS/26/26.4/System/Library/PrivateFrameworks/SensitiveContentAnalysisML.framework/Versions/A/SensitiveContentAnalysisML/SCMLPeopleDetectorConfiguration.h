@class NSString, NSLocale;

@interface SCMLPeopleDetectorConfiguration : NSObject

@property (retain, nonatomic) NSLocale *locale;
@property (nonatomic) int onBehalfOfProcessID;
@property (copy, nonatomic) NSString *modelManagerServicesUseCaseID;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithModelManagerServicesUseCaseID:(id)a0;

@end
