@class NSString, ABPerson;

@interface ABAddSuggestedValueTask : ABTask

@property (retain) ABPerson *person;
@property (retain) NSString *property;
@property (retain) id value;

- (void).cxx_destruct;
- (id)run:(id *)a0;
- (id)initWithName:(id)a0 person:(id)a1 property:(id)a2 value:(id)a3;
- (id)multiValueByAddingSuggestedValue;
- (id)getOrMakeMultivalue;
- (id)firstAvailableLabelGivenCurrentLabels:(id)a0;

@end
