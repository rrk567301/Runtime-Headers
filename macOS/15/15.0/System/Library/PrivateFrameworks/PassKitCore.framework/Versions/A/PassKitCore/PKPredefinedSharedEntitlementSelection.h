@class NSString, NSArray;

@interface PKPredefinedSharedEntitlementSelection : NSObject {
    NSString *_identifier;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSString *iconName;
@property (readonly, nonatomic) NSArray *sharedEntitlements;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 description:(id)a1 sharedEntitlements:(id)a2;

@end
