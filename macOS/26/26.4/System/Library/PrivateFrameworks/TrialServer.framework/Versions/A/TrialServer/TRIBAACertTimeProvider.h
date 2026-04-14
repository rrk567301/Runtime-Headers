@class NSString;

@interface TRIBAACertTimeProvider : NSObject <TRITimeProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)currentMonotonicTimeNanos;

@end
