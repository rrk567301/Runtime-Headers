@class NSSet, NSDictionary, CNPromise, NSNumber;

@interface CNContactMatchInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL matchedNameProperty;
@property (copy) NSNumber *relevanceScore;
@property (copy) NSDictionary *matchedProperties;
@property (retain) NSSet *matchedTerms;
@property (retain) CNPromise *excerpt;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
