@class NSArray;

@interface APTargetingDimensions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *inclusionCriteria;
@property (retain) NSArray *exclusionCriteria;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
