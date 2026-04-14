@class CWFEventID, NSUUID, NSDictionary, NSDate;

@interface CWFEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) CWFEventID *eventID;
@property (nonatomic) unsigned long long acknowledgementTimeout;
@property (copy, nonatomic) id /* block */ acknowledge;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSDictionary *info;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)setType:(long long)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (long long)type;
- (id)init;
- (id)JSONCompatibleKeyValueMap;
- (id)description;
- (BOOL)isEqualToEvent:(id)a0;

@end
