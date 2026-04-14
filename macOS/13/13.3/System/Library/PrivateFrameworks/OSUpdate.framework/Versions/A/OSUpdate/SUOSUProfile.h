@class NSString;

@interface SUOSUProfile : NSObject

@property (retain) NSString *name;
@property (retain) NSString *catalogURL;
@property (retain) NSString *audienceID;
@property (retain) NSString *profileLink;
@property BOOL enableOnProdFused;

- (id)description;
- (void).cxx_destruct;
- (id)initWithInfoDictionary:(id)a0;

@end
