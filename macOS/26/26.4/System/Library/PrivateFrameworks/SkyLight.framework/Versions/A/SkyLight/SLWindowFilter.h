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

- (id)initFromDictionaryRepresentation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (void)dealloc;
- (BOOL)isEqualToWindowFilter:(id)a0;

@end
