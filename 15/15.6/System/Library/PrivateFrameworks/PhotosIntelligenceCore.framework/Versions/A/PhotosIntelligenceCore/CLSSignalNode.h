@class NSString;

@interface CLSSignalNode : NSObject

@property (readonly) unsigned long long identifier;
@property (readonly) NSString *name;
@property (readonly) double operatingPoint;
@property (readonly) double highPrecisionOperatingPoint;
@property (readonly) double highRecallOperatingPoint;

- (void).cxx_destruct;
- (char)passesHighPrecisionWithSignal:(id)a0;
- (char)passesHighRecallWithSignal:(id)a0;
- (char)passesWithConfidence:(double)a0;
- (char)passesHighRecallWithConfidence:(double)a0;
- (char)failsHighPrecisionWithConfidence:(double)a0;
- (char)failsHighRecallWithConfidence:(double)a0;
- (char)passesHighPrecisionWithConfidence:(double)a0;
- (char)passesWithSignal:(id)a0;
- (char)failsHighPrecisionWithSignal:(id)a0;
- (char)failsHighRecallWithSignal:(id)a0;
- (char)failsWithConfidence:(double)a0;
- (char)failsWithSignal:(id)a0;
- (id)initWithIdentifier:(unsigned long long)a0 name:(id)a1 operatingPoint:(double)a2 highPrecisionOperatingPoint:(double)a3 highRecallOperatingPoint:(double)a4;
- (id)signalInfoWithIsHierarchical:(char)a0;

@end
