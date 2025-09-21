@class NSString;

@interface IEExporterOptions : NSObject

@property (nonatomic) char transparent;
@property (nonatomic) char lightMode;
@property (nonatomic) char darkMode;
@property (nonatomic) char conditions;
@property (nonatomic) int dotsPerInch;
@property (retain, nonatomic) NSString *highlightResponse;

- (void).cxx_destruct;

@end
