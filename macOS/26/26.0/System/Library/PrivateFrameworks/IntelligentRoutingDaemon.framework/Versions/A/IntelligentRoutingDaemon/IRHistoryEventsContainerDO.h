@class NSArray;

@interface IRHistoryEventsContainerDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *historyEvents;

+ (id)historyEventsContainerDOWithHistoryEvents:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)copyWithReplacementHistoryEvents:(id)a0;
- (id)initWithHistoryEvents:(id)a0;
- (BOOL)isEqualToHistoryEventsContainerDO:(id)a0;

@end
