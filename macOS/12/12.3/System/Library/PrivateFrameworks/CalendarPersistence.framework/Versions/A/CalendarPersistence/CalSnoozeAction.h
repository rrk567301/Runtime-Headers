@class NSString;

@interface CalSnoozeAction : NSObject {
    unsigned long long _type;
    long long _interval;
    unsigned long long _scale;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL relative;

+ (id)allSnoozeActions;

- (void).cxx_destruct;
- (id)readyDateForAlarmNotification:(id)a0;
- (id)expirationDateForAlarmNotification:(id)a0;
- (id)initAbsoluteWithIdentifier:(id)a0 title:(id)a1;
- (id)initWithMinutesToStart:(long long)a0 identifier:(id)a1 title:(id)a2;
- (id)initWithType:(unsigned long long)a0 interval:(long long)a1 scale:(unsigned long long)a2 identifier:(id)a3 title:(id)a4;

@end
