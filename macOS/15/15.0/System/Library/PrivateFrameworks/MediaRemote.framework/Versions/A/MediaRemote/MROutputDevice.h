@class NSString, MRBatteryLevel;

@interface MROutputDevice : NSObject

@property (retain, nonatomic) NSString *deviceID;
@property (retain, nonatomic) NSString *groupID;
@property (retain, nonatomic) NSString *actionID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) long long section;
@property (nonatomic) long long priority;
@property (retain, nonatomic) MRBatteryLevel *batteryLevel;
@property (retain, nonatomic) NSString *symbolName;
@property (nonatomic, getter=isGroupable) BOOL groupable;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithActionID:(id)a0;
- (id)initWithOutputDevice:(id)a0;

@end
