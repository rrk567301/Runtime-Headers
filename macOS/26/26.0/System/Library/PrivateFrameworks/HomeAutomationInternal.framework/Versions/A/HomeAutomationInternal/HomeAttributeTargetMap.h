@class NSString;

@interface HomeAttributeTargetMap : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) double mapID;

- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
