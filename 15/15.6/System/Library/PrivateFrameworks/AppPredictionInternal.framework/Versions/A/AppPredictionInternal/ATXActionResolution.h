@class ATXSlotResolution;
@protocol ATXPredictionContextBuilderProtocol;

@interface ATXActionResolution : NSObject {
    ATXSlotResolution *_slotResolver;
    id<ATXPredictionContextBuilderProtocol> _predictionContextBuilder;
}

- (id)init;
- (void).cxx_destruct;
- (id)statisticsForActionKey:(id)a0 context:(id)a1;
- (id)actionPredictionsForActionKey:(id)a0 statistics:(id)a1 appActionPredictionItem:(const struct ATXPredictionItem { id x0; unsigned long long x1; float x2[817]; float x3; char x4; char x5; } *)a2 appActionLogProbability:(double)a3 scoreLogger:(id)a4 andLimit:(int)a5 forMagicalMoments:(char)a6 currentDate:(id)a7;
- (id)actionPredictionsForActionKey:(id)a0 statistics:(id)a1 appActionPredictionItem:(const struct ATXPredictionItem { id x0; unsigned long long x1; float x2[817]; float x3; char x4; char x5; } *)a2 appActionLogProbability:(double)a3 scoreLogger:(id)a4 andLimit:(int)a5 forMagicalMoments:(char)a6 predictionItemsToKeep:(void *)a7 currentDate:(id)a8;
- (id)initWithSlotResolver:(id)a0 predictionContextBuilder:(id)a1;
- (id)statisticsForActionKey:(id)a0;

@end
