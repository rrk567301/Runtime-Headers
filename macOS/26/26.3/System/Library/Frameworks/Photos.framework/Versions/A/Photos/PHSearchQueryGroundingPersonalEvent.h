@class NSString, NSArray;

@interface PHSearchQueryGroundingPersonalEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *meaningLabel;
@property (readonly, nonatomic) NSArray *momentUUIDs;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMeaningLabel:(id)a0 momentUUIDs:(id)a1;

@end
