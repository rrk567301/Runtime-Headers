@class NSString, NSArray, HomeEntity;

@interface HomeEntityResponse : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) HomeEntity *entity;
@property (nonatomic, copy) NSArray *taskResponses;

- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
