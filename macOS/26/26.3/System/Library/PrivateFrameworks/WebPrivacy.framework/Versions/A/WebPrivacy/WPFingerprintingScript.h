@class NSString;

@interface WPFingerprintingScript : NSObject

@property (readonly, nonatomic) NSString *host;
@property (readonly, nonatomic, getter=isFirstParty) BOOL firstParty;
@property (readonly, nonatomic, getter=isTopDomain) BOOL topDomain;
@property (readonly, nonatomic) unsigned long long allowedCategories;

- (id)description;
- (void).cxx_destruct;
- (id)initWithHost:(id)a0 isFirstParty:(BOOL)a1 isTopDomain:(BOOL)a2;
- (id)initWithHost:(id)a0 isFirstParty:(BOOL)a1 isTopDomain:(BOOL)a2 allowedCategories:(unsigned long long)a3;

@end
