@class NSString, NSArray;

@interface PKPassUpcomingPassInformationGroup : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *entries;

+ (id)createFromEntries:(id)a0 identifier:(id)a1 name:(id)a2;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithIdentifier:(id)a0 name:(id)a1 entries:(id)a2;

@end
