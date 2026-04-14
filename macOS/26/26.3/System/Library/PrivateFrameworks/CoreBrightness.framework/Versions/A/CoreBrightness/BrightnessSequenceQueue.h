@class NSArray;

@interface BrightnessSequenceQueue : NSObject {
    double _timeFactor;
}

@property double sequenceStartTime;
@property (readonly) BOOL isDone;
@property (readonly) unsigned long long currentUpdateID;
@property (readonly) NSArray *flipbook;

- (unsigned long long)absoluteTimestampForUpdate:(id)a0;
- (id)initWithArrayOfUpdates:(id)a0;
- (id)nextUpdate;

@end
