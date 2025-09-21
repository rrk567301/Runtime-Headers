@class NSSet, NSNumber;

@interface SLWindowFilter : NSObject

@property (retain) NSSet *includedWindows;
@property (retain) NSSet *excludedWindows;
@property (retain) NSSet *includedApplications;
@property (retain) NSSet *excludedApplications;
@property (retain) NSSet *includedPIDS;
@property (retain) NSSet *excludedPIDS;
@property (retain) NSNumber *filterPolicy;
@property char hide_menu_bar;
@property char enforce_sharing_type;
@property (retain) NSNumber *shieldWindow;

- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initFromDictionaryRepresentation:(id)a0;
- (char)isEqualToWindowFilter:(id)a0;

@end
