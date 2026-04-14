@class NSDateInterval;

@interface BPSTimeWindowState : BPSWindowState <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDateInterval *dateInterval;

- (id)metadata;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDateInterval:(id)a0 identifier:(id)a1 aggregate:(id)a2 completed:(BOOL)a3;

@end
