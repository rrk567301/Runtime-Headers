@class NSString;
@protocol PFTTimeProvider;

@interface PFTTimeProvider : NSObject <PFTTimeProvider>

@property (class, readonly) id<PFTTimeProvider> defaultProvider;

@property (readonly) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
