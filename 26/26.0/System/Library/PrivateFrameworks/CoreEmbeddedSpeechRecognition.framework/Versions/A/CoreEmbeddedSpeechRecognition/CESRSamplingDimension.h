@class NSString;

@interface CESRSamplingDimension : NSObject

@property (readonly, copy, nonatomic) NSString *asrLocale;

- (id)description;
- (BOOL)matches:(id)a0;
- (void).cxx_destruct;
- (id)initWithAsrLocale:(id)a0;

@end
