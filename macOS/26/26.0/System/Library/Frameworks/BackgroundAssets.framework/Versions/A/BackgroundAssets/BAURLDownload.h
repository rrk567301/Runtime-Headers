@class NSURLRequest;

@interface BAURLDownload : BADownload <NSCopying>

@property (retain) NSURLRequest *request;

+ (BOOL)supportsSecureCoding;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 request:(id)a1 applicationGroupIdentifier:(id)a2 priority:(long long)a3;
- (void)syncTo:(id)a0;
- (id)initWithIdentifier:(id)a0 request:(id)a1 fileSize:(unsigned long long)a2 applicationGroupIdentifier:(id)a3;
- (id)initWithIdentifier:(id)a0 request:(id)a1 applicationGroupIdentifier:(id)a2;
- (id)initWithIdentifier:(id)a0 request:(id)a1 essential:(BOOL)a2 fileSize:(unsigned long long)a3 applicationGroupIdentifier:(id)a4 priority:(long long)a5;
- (id)initWithIdentifier:(id)a0 request:(id)a1 essential:(BOOL)a2 fileSize:(unsigned long long)a3 applicationGroupIdentifier:(id)a4 priority:(long long)a5 forManagedAssetPack:(BOOL)a6;

@end
