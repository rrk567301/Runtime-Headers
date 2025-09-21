@class NSSet, NSArray, NSString;

@interface CHRemoteMathRecognizer : CHRemoteRecognizer <CHRecognizingMath>

@property (retain, nonatomic) NSSet *declaredVariables;
@property (copy, nonatomic) NSArray *locales;
@property (nonatomic) unsigned long long maxRecognitionResultCount;
@property (nonatomic) struct CGSize { double x0; double x1; } minimumDrawingSize;
@property (readonly, nonatomic) char enableCachingIfAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEqualToRemoteMathRecognizer:(id)a0;
- (id)mathRecognitionResultForDrawing:(id)a0 options:(id)a1 error:(id *)a2;

@end
