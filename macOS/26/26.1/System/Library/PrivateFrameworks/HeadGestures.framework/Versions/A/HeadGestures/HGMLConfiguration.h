@class HGMLConfigurationInternal;

@interface HGMLConfiguration : NSObject

@property (retain, nonatomic) HGMLConfigurationInternal *internal;

- (void).cxx_destruct;
- (id)init;

@end
