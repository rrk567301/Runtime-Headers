@class NSSet, NSNumber;

@interface SLWindowFilter : NSObject

@property (retain) NSSet *includedWindows;
@property (retain) NSSet *excludedWindows;
@property (retain) NSSet *includedApplications;
@property (retain) NSSet *excludedApplications;
@property (retain) NSSet *includedPIDS;
@property (retain) NSSet *excludedPIDS;
@property (retain) NSNumber *filterPolicy;
@property BOOL hide_menu_bar;
@property BOOL enforce_sharing_type;
@property (retain) NSNumber *shieldWindow;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initFromDictionaryRepresentation:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)isEqualToWindowFilter:(id)a0;

@end
