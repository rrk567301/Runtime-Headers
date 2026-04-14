@class NSString;

@interface NPKRelevancyInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *passUniqueID;
@property (retain) NSString *groupID;
@property (retain) NSString *relevantText;
@property BOOL shouldSuppressLiveActivity;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithPassUniqueID:(id)a0 groupID:(id)a1 relevantText:(id)a2 shouldSuppressLiveActivity:(BOOL)a3;

@end
