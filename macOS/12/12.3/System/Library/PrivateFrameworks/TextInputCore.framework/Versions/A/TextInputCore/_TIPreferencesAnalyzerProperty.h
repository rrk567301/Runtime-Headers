@class NSString;

@interface _TIPreferencesAnalyzerProperty : NSObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) id defaultValue;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0 domain:(id)a1 defaultValue:(id)a2;

@end
