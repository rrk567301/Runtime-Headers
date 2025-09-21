@class NSString, CalLocation;

@interface CalRoute : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) CalLocation *start;
@property (retain) CalLocation *end;
@property double duration;
@property (copy) NSString *route;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
