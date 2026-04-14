@class NSString, NSArray, NSLocale;

@interface BilingualPolicy : NSObject <KLPrimaryInputSourcePolicy>

@property (retain, nonatomic) NSLocale *primaryLocale;
@property (retain, nonatomic) NSString *primaryInputSource;
@property (retain, nonatomic) NSArray *enabledInputSources;

- (void).cxx_destruct;
- (BOOL)isPrimaryInputSource:(id)a0;
- (id)initWithPrimaryLocale:(id)a0 enabledInputSources:(id)a1;

@end
