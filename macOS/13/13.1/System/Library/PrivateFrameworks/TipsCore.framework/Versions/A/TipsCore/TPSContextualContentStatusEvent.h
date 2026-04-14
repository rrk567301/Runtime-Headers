@class NSString;

@interface TPSContextualContentStatusEvent : TPSContextualEvent

@property (nonatomic) long long statusType;
@property (copy, nonatomic) NSString *contentID;

+ (BOOL)supportsSecureCoding;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithEventIdentifier:(id)a0 contentIdentifier:(id)a1 statusType:(long long)a2 status:(long long)a3;
- (void)updateStatusTypeIfOutOfBound;
- (unsigned int)minObservationCount;

@end
