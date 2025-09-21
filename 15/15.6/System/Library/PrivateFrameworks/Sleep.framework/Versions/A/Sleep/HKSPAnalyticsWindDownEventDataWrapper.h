@class NSArray;

@interface HKSPAnalyticsWindDownEventDataWrapper : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSArray *eventDatums;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEventDatums:(id)a0;

@end
