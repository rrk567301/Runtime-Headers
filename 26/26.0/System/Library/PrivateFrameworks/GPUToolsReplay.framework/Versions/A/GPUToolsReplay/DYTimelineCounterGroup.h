@class NSData, NSArray;

@interface DYTimelineCounterGroup : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *timestamps;
@property (retain, nonatomic) NSArray *counters;
@property (retain, nonatomic) NSArray *counterNames;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
