@class ADInterSessionFilter, ADInterSessionFilterParameters;

@interface ADInFieldCalibrationInterSessionData : NSObject {
    ADInterSessionFilterParameters *_isfParameters;
    ADInterSessionFilter *_isf;
}

@property (nonatomic) unsigned int version;

+ (id)interSessionDataFromFile:(id)a0;

- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (BOOL)reset;
- (id)persistenceData;
- (long long)insertEntryAndCalculate:(id)a0 withWeight:(double)a1 toResult:(id *)a2;

@end
