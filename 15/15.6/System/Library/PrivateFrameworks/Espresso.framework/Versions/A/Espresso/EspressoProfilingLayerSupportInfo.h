@class NSArray, NSString;

@interface EspressoProfilingLayerSupportInfo : NSObject

@property (retain) NSArray *error_public;
@property (retain) NSArray *error_private;
@property char supported;
@property char exists;
@property char has_perf_warning;
@property char internal_layer;
@property (retain) NSString *type;

- (void).cxx_destruct;

@end
