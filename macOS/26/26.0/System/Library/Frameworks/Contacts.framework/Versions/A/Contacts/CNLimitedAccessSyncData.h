@class NSArray, NSEnumerator;

@interface CNLimitedAccessSyncData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long currentSequenceNumber;
@property (nonatomic) BOOL fullSyncRequired;
@property (retain, nonatomic) NSArray *syncEventsArray;
@property (readonly, nonatomic) NSEnumerator *syncEvents;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
