@class NSDateInterval;

@interface BPSTimeWindowState : BPSWindowState <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSDateInterval *dateInterval;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)metadata;
- (id)initWithDateInterval:(id)a0 identifier:(id)a1 aggregate:(id)a2 completed:(char)a3;

@end
