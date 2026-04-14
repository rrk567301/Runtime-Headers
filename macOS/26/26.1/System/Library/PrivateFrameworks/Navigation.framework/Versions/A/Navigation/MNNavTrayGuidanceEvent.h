@class GEOComposedString, NSString, GEOComposedGuidanceEvent;

@interface MNNavTrayGuidanceEvent : NSObject <NSSecureCoding, NSCoding>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) GEOComposedGuidanceEvent *_guidanceEvent;
@property (nonatomic, readonly) GEOComposedString *title;
@property (nonatomic, readonly) GEOComposedString *detail;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithGuidanceEvent:(id)a0;

@end
