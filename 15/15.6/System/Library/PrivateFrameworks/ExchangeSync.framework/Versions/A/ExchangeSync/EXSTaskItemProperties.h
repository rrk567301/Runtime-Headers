@class NSDateComponents, NSDate;

@interface EXSTaskItemProperties : EXSItemProperties

@property (nonatomic) char completed;
@property (readonly, nonatomic) char completedSpecified;
@property (retain, nonatomic) NSDate *completeDate;
@property (readonly, nonatomic) char completeDateSpecified;
@property (retain, nonatomic) NSDateComponents *dueDate;
@property (readonly, nonatomic) char dueDateSpecified;
@property (nonatomic) long long order;
@property (readonly, nonatomic) char orderSpecified;
@property (retain, nonatomic) NSDateComponents *startDate;
@property (readonly, nonatomic) char startDateSpecified;

+ (id)itemPropertiesFromData:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)buildPropertiesDictionary;
- (id)dataFromProperties;
- (void)populateFromPropertiesDictionary:(id)a0;

@end
