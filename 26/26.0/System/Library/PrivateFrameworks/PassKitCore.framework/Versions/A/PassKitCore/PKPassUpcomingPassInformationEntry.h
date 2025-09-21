@class PKPassUpcomingPassInformationEntryContent, PKPassUpcomingPassInformationEntryMetadata;

@interface PKPassUpcomingPassInformationEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKPassUpcomingPassInformationEntryMetadata *metadata;
@property (readonly, nonatomic) PKPassUpcomingPassInformationEntryContent *content;
@property (readonly, nonatomic, getter=isActive) BOOL active;

+ (id)createFromDictionary:(id)a0 bundle:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (BOOL)isEqualToEntry:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithMetadata:(id)a0 content:(id)a1;
- (BOOL)isEquivalentToEntry:(id)a0;
- (BOOL)populateFromDictionary:(id)a0 bundle:(id)a1;

@end
