@class NSString;

@interface IRAppleTVControlEvent : IREvent

@property (readonly, nonatomic) long long eventType;
@property (readonly, nonatomic) long long eventSubType;
@property (retain, nonatomic) NSString *contextIdentifier;
@property (retain, nonatomic) NSString *bundleID;

+ (BOOL)supportsSecureCoding;
+ (id)new;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithEventType:(long long)a0 eventSubType:(long long)a1;
- (BOOL)_isEventSubTypeValid:(long long)a0;
- (BOOL)_isEventTypeValid:(long long)a0;

@end
