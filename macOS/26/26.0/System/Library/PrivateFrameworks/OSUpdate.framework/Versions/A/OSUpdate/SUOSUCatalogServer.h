@class NSString;

@interface SUOSUCatalogServer : NSObject

@property (retain) NSString *name;
@property (retain) NSString *trainName;
@property (retain) NSString *catalogURL;
@property (retain) NSString *backgroundCatalogURL;
@property (retain) NSString *audienceID;
@property BOOL enableOnProdFused;

- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 trainName:(id)a1;

@end
