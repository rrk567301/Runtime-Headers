@class NSString;

@interface ULVisualMappingKitManagerDelegateWrapper : NSObject <MicroLocationDaemon.ULVisualMappingKitManagerDelegate>

@property (nonatomic) struct ULVisualMappingKitManagerDelegateCppInterface { void /* function */ **x0; } *cppInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didUpdateLocation:(id)a0 anchors:(id)a1;
- (id)initWithCppInterface:(struct ULVisualMappingKitManagerDelegateCppInterface { void /* function */ **x0; } *)a0;

@end
