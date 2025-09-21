@protocol BMBookmark;

@interface WFSettingsClientBookmark : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) id<BMBookmark> biomeBookmark;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)actionReversalState;
- (id)initWithActionReversalState:(id)a0;
- (id)initWithBiomeBookmark:(id)a0;

@end
