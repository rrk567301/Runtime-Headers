@class NSString;

@interface PPSuggestedEvent : PPScoredEvent

@property (readonly, nonatomic) unsigned char category;
@property (readonly, nonatomic) NSString *eventIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPPEvent:(id)a0 score:(double)a1;
- (id)initWithPPEvent:(id)a0;

@end
