@class NSString;

@interface HKSPAnalyticsWindDownEventData : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long action;
@property (readonly, nonatomic) char wasUsed;
@property (readonly, nonatomic) char wasCollected;
@property (readonly, copy, nonatomic) NSString *identifier;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)collectedEventDataCopy;
- (id)initWithWindDownAction:(unsigned long long)a0 wasUsed:(char)a1 identifier:(id)a2;
- (id)initWithWindDownAction:(unsigned long long)a0 wasUsed:(char)a1 identifier:(id)a2 wasCollected:(char)a3;
- (char)isEqualEventData:(id)a0;

@end
