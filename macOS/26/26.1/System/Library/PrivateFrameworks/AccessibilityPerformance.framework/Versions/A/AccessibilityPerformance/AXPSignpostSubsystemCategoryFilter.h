@class NSString, SignpostSupportSubsystemCategoryFilterEntry;

@interface AXPSignpostSubsystemCategoryFilter : NSObject <NSCopying>

@property (retain, nonatomic) SignpostSupportSubsystemCategoryFilterEntry *entry;
@property (readonly, copy, nonatomic) NSString *subsystem;
@property (readonly, copy, nonatomic) NSString *category;

- (id)initWithSubsystem:(id)a0 category:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
