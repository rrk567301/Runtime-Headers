@interface DAAction : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long itemChangeType;
@property (retain, nonatomic) id serverId;
@property (retain, nonatomic) id instanceId;
@property (retain, nonatomic, setter=_setChangedItem:) id changedItem;
@property (nonatomic) int changeId;
@property (retain, nonatomic) id forwardedAttendees;
@property (retain, nonatomic) id forwardedAttendeeUUIDs;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)message;
- (id)initWithItemChangeType:(unsigned long long)a0 changedItem:(id)a1 serverId:(id)a2;
- (id)initWithItemChangeType:(unsigned long long)a0 changedItem:(id)a1 serverId:(id)a2 instanceId:(id)a3;
- (id)stringForItemChangeType:(unsigned long long)a0;

@end
