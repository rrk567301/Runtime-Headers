@class NSString;

@interface IRMediaEvent : IREvent

@property (readonly, nonatomic) long long eventType;
@property (readonly, nonatomic) long long eventSubType;
@property (retain, nonatomic) NSString *contextIdentifier;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) char isOutsideApp;
@property (nonatomic) char isEligibleApp;

+ (id)new;
+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEventType:(long long)a0 eventSubType:(long long)a1;
- (char)_isEventSubTypeValid:(long long)a0;
- (char)_isEventTypeValid:(long long)a0;

@end
