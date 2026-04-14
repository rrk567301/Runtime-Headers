@class NSString, NSDictionary;

@interface HMMNamedGroupSpecifier : NSObject <HMMGroupSpecifier>

@property (class, readonly, nonatomic) NSString *type;

@property (readonly, nonatomic) NSString *groupName;
@property (readonly, nonatomic) NSDictionary *descriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithGroupName:(id)a0;
- (BOOL)isEqualToGroupNameSpecifier:(id)a0;
- (id)coreDataGroupUsingContext:(id)a0;

@end
