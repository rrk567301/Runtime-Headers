@class NSArray;

@interface GEOComposedRouteLaneInfo : NSObject <NSSecureCoding> {
    char _good;
    char _hov;
    char _preferred;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char hasDirections;
@property (copy, nonatomic) NSArray *directions;
@property (readonly, nonatomic) char isLaneForManeuver;
@property (readonly, nonatomic) char isHOVLane;
@property (readonly, nonatomic) char isPreferredLaneForManeuver;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLaneInfo:(id)a0;

@end
