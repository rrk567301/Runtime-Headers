@class NSCountedSet, NSString;

@interface AKStatistics : NSObject

@property (retain, nonatomic) NSCountedSet *annotationsCounts;
@property (retain, nonatomic) NSString *documentType;
@property (retain, nonatomic) NSString *clientPrefix;

+ (id)nameForClassName:(id)a0;
+ (id)nameForAnnotation:(id)a0;

- (void).cxx_destruct;
- (void)resetLogging;
- (void)logAnnotationAdded:(id)a0;
- (void)logInkAnnotationStrokeAdded:(id)a0;
- (void)_logCoreAnalyticsAction:(id)a0;
- (void)_logCoreAnalyticsHUDPickActionForAnnotationType:(id)a0;
- (void)_logCoreAnalyticsAnnotationCreateActionForAnnotationType:(id)a0 count:(unsigned long long)a1;
- (void)logShapeDetectionHUDShown;
- (void)logShapeDetectionHUDPickedShape:(id)a0;
- (void)logDocumentSaved;

@end
