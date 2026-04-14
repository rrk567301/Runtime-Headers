@class NSSet;

@interface IRReplayEventsContainerDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *replayEvents;

+ (id)replayEventsContainerDOWithReplayEvents:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)copyWithReplacementReplayEvents:(id)a0;
- (id)initWithReplayEvents:(id)a0;
- (BOOL)isEqualToReplayEventsContainerDO:(id)a0;

@end
