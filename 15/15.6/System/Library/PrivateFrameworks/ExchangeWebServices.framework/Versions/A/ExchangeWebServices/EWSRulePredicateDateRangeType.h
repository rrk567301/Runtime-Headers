@class NSString, NSDateComponents;

@interface EWSRulePredicateDateRangeType : NSObject <XSDefinitionProvider>

@property (retain, nonatomic) NSDateComponents *StartDateTime;
@property (nonatomic) char StartDateTimeSpecified;
@property (retain, nonatomic) NSDateComponents *EndDateTime;
@property (nonatomic) char EndDateTimeSpecified;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
