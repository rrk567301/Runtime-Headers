@class NSString;

@interface ManageSubscriptionsRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *familyID;
@property (retain) NSString *sceneID;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFamilyID:(id)a0;
- (id)initWithFamilyID:(id)a0 sceneID:(id)a1;

@end
