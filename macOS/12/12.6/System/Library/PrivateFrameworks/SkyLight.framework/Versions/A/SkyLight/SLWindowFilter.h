@class NSSet, NSNumber;

@interface SLWindowFilter : NSObject

@property (retain) NSSet *includedWindows;
@property (retain) NSSet *excludedWindows;
@property (retain) NSSet *includedApplications;
@property (retain) NSSet *excludedApplications;
@property (retain) NSNumber *filterPolicy;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)dictionaryRepresentation;
- (BOOL)isEqualToWindowFilter:(id)a0;
- (id)initFromDictionaryRepresentation:(id)a0;

@end
