@class NSString;

@interface AKTapGestureRecognizer : NSClickGestureRecognizer <AKPenDetectionGestureRecognizerProtocol>

@property char penGestureDetected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reset;

@end
