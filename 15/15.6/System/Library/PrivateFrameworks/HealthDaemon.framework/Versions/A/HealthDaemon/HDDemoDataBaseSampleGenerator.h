@class HDDemoDataGenerator, HDProfile, NSString;

@interface HDDemoDataBaseSampleGenerator : NSObject <HDDemoDataObjectGenerator> {
    char _createdFromNSKeyedUnarchiver;
}

@property (class, readonly) char supportsSecureCoding;

@property (weak, nonatomic) HDProfile *profile;
@property (weak, nonatomic) HDDemoDataGenerator *demoDataGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)_createdFromNSKeyedUnarchiver;
- (char)createdFromNSKeyedUnarchiver;
- (void)generateFirstRunObjectsForDemoPerson:(id)a0 firstDate:(id)a1 objectCollection:(id)a2;
- (void)generateObjectsForDemoPerson:(id)a0 fromTime:(double)a1 toTime:(double)a2 currentDate:(id)a3 objectCollection:(id)a4;
- (void)setDemoDataGenerationContextWithProfile:(id)a0 generatorState:(id)a1;
- (void)setupWithDemoDataGenerator:(id)a0;

@end
