@class NSString, SignpostSupportSubsystemCategoryFilterEntry;

@interface AXPSignpostSubsystemCategoryFilter : NSObject <NSCopying>

@property (retain, nonatomic) SignpostSupportSubsystemCategoryFilterEntry *entry;
@property (readonly, copy, nonatomic) NSString *subsystem;
@property (readonly, copy, nonatomic) NSString *category;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSubsystem:(id)a0 category:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
