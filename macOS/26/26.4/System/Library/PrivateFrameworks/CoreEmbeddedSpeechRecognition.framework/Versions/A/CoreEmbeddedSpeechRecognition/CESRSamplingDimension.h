@class NSString;

@interface CESRSamplingDimension : NSObject

@property (readonly, copy, nonatomic) NSString *asrLocale;

- (BOOL)matches:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAsrLocale:(id)a0;

@end
