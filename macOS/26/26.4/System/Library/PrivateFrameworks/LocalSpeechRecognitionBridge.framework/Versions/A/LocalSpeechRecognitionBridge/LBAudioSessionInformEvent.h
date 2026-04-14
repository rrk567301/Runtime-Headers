@class NSDate;

@interface LBAudioSessionInformEvent : NSObject

@property (readonly, nonatomic) unsigned long long actionType;
@property (readonly, nonatomic) NSDate *timestamp;

- (void).cxx_destruct;
- (id)description;
- (id)initWithActionType:(unsigned long long)a0;
- (id)initWithActionType:(unsigned long long)a0 timestamp:(id)a1;

@end
