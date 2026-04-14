@class NSString, NSObject;
@protocol OS_nw_array;

@interface NWConcrete_nw_migration_policy : NSObject <OS_nw_migration_policy> {
    unsigned long long flags;
    NSObject<OS_nw_array> *interface_option_details;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
