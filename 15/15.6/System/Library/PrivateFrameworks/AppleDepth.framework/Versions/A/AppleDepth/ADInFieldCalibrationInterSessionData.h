@class ADInterSessionFilter, ADInterSessionFilterParameters;

@interface ADInFieldCalibrationInterSessionData : NSObject {
    ADInterSessionFilterParameters *_isfParameters;
    ADInterSessionFilter *_isf;
}

@property (nonatomic) unsigned int version;

+ (id)interSessionDataFromFile:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (char)reset;
- (char)writeToFile:(id)a0 atomically:(char)a1;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)persistenceData;
- (long long)insertEntryAndCalculate:(id)a0 withWeight:(double)a1 toResult:(id *)a2;

@end
