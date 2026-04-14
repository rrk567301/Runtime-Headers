@class NSString, NSLocale;

@interface MonolingualPolicy : NSObject <KLPrimaryInputSourcePolicy>

@property (retain, nonatomic) NSLocale *primaryLocale;
@property (retain, nonatomic) NSString *primaryInputSource;

- (void).cxx_destruct;
- (BOOL)isPrimaryInputSource:(id)a0;
- (id)initWithPrimaryLocale:(id)a0 inputSource:(id)a1;

@end
