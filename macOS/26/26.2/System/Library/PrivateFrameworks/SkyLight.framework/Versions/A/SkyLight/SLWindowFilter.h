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

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initFromDictionaryRepresentation:(id)a0;
- (id)init;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (BOOL)isEqualToWindowFilter:(id)a0;

@end
