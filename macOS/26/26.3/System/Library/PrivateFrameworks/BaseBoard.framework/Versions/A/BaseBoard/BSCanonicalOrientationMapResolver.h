@class NSString, NSArray;

@interface BSCanonicalOrientationMapResolver : NSObject <BSXPCAutoCoding, BSInterfaceOrientationMapResolving> {
    long long _targetOrientation;
    long long _currentOrientation;
    NSArray *_fallbackOrientations;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)initWithTargetOrientation:(long long)a0 currentOrientation:(long long)a1;
- (id)initWithTargetOrientation:(long long)a0 currentOrientation:(long long)a1 fallbackOrientations:(id)a2;
- (long long)interfaceOrientationForSupportedOrientations:(unsigned long long)a0 preferredOrientation:(long long)a1;
- (id)membersForCoder;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
