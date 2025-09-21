@class NSArray, NSString, NSDate;

@interface _CDPSimpleDataPoint : NSObject <_CDPDataPoint>

@property (nonatomic) char userIsSender;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSArray *peopleIdentifiers;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) char userIsThreadInitiator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
