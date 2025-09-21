@class NSArray, NSString;

@interface SAAlarmDelete : SADomainCommand <SAAlarmAlarmAction>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *alarmIds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
