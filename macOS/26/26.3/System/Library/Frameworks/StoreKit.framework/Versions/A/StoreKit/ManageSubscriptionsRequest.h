@class NSString;

@interface ManageSubscriptionsRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *familyID;
@property (retain) NSString *sceneID;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFamilyID:(id)a0;
- (id)initWithFamilyID:(id)a0 sceneID:(id)a1;

@end
