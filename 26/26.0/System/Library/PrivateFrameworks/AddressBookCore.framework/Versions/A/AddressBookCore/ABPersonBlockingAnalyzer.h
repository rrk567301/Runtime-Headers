@class NSString;
@protocol ABPersonBlocking;

@interface ABPersonBlockingAnalyzer : NSObject <ABPersonBlocking>

@property (class, readonly) id<ABPersonBlocking> sharedAnalyzer;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)person:(id)a0 hasHandlesWithBlockState:(BOOL)a1;
- (void)setPerson:(id)a0 isBlocked:(BOOL)a1;

@end
