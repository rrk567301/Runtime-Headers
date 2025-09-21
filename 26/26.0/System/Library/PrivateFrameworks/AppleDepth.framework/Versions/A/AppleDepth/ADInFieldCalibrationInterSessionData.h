@class ADInterSessionFilter, ADInterSessionFilterParameters;

@interface ADInFieldCalibrationInterSessionData : NSObject {
    ADInterSessionFilterParameters *_isfParameters;
    ADInterSessionFilter *_isf;
}

@property (nonatomic) unsigned int version;

+ (id)interSessionDataFromFile:(id)a0;

- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (id)initWithDictionaryRepresentation:(id)a0;
- (BOOL)reset;
- (id)init;
- (void).cxx_destruct;
- (id)persistenceData;
- (long long)insertEntryAndCalculate:(id)a0 withWeight:(double)a1 toResult:(id *)a2;

@end
