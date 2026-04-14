@class NSArray, NSDictionary;

@interface BiometricKitTemplateInfo : NSObject

@property (retain, nonatomic) NSArray *topology;
@property (retain, nonatomic) NSDictionary *details;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;

@end
