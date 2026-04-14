@class NSString, SignpostSupportSubsystemCategoryFilterEntry;

@interface AXPSignpostSubsystemCategoryFilter : NSObject <NSCopying>

@property (retain, nonatomic) SignpostSupportSubsystemCategoryFilterEntry *entry;
@property (readonly, copy, nonatomic) NSString *subsystem;
@property (readonly, copy, nonatomic) NSString *category;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithSubsystem:(id)a0 category:(id)a1;

@end
