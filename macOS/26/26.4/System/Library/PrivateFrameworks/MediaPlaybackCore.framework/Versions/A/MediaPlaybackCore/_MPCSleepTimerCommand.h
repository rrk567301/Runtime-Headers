@class NSString;

@interface _MPCSleepTimerCommand : _MPCPlayerCommand <MPCSleepTimerCommand>

@property (nonatomic) double time;
@property (nonatomic) double fireDate;
@property (nonatomic) long long stopMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
