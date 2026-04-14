@class NSString, ABPerson;

@interface ABAddSuggestedValueTask : CNTask

@property (retain) ABPerson *person;
@property (retain) NSString *property;
@property (retain) id value;

- (id)run:(id *)a0;
- (void).cxx_destruct;
- (id)firstAvailableLabelGivenCurrentLabels:(id)a0;
- (id)getOrMakeMultivalue;
- (id)initWithName:(id)a0 person:(id)a1 property:(id)a2 value:(id)a3;
- (id)multiValueByAddingSuggestedValue;

@end
