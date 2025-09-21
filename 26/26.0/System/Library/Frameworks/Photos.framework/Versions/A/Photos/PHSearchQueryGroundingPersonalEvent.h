@class NSString, NSArray;

@interface PHSearchQueryGroundingPersonalEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *meaningLabel;
@property (readonly, nonatomic) NSArray *momentUUIDs;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithMeaningLabel:(id)a0 momentUUIDs:(id)a1;

@end
