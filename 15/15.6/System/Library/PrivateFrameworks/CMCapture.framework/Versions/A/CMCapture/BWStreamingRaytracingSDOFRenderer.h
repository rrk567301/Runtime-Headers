@class NSString;

@interface BWStreamingRaytracingSDOFRenderer : NSObject <BWFilterRenderer>

@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) short type;
@property (readonly, nonatomic) char supportsAnimation;
@property (readonly, nonatomic) char adjustsMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

@end
