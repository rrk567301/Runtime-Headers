@class NSArray, NSString, GEOResource, NSData;

@interface GEOResourceInfo : NSObject

@property (copy, nonatomic) NSArray *equivalentResources;
@property (readonly, nonatomic) GEOResource *resource;
@property (readonly, nonatomic) int validationMethod;
@property (copy, nonatomic) NSString *eTag;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSData *checksum;

- (id)description;
- (void).cxx_destruct;
- (id)initWithResource:(id)a0;
- (char)shouldCheckForUpdateForResourceAtPath:(id)a0 useExtendedAttrs:(char)a1 forceUpdateCheck:(char)a2 log:(id)a3;
- (char)validateResource:(id)a0 log:(id)a1;
- (char)validateResourceAtPath:(id)a0 useExtendedAttrs:(char)a1 log:(id)a2;

@end
