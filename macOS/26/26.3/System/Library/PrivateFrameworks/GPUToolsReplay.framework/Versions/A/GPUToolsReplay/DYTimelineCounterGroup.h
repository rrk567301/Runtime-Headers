@class NSData, NSArray;

@interface DYTimelineCounterGroup : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *timestamps;
@property (retain, nonatomic) NSArray *counters;
@property (retain, nonatomic) NSArray *counterNames;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
