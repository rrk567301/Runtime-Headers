@class NSArray, NSEnumerator;

@interface CNLimitedAccessSyncData : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long currentSequenceNumber;
@property (nonatomic) char fullSyncRequired;
@property (retain, nonatomic) NSArray *syncEventsArray;
@property (readonly, nonatomic) NSEnumerator *syncEvents;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
