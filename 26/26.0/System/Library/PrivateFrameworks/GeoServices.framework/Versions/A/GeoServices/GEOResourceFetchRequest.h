@class NSArray, GEOResourceManifestConfiguration, NSString;

@interface GEOResourceFetchRequest : GEOXPCRequest <GEOXPCRequest>

@property (retain, nonatomic) NSArray *resources;
@property (retain, nonatomic) GEOResourceManifestConfiguration *manifestConfiguration;
@property (nonatomic) BOOL force;
@property (nonatomic) BOOL unpack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)replyClass;

- (BOOL)isValid;
- (unsigned long long)reply;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;
- (id)initWithTraits:(id)a0 auditToken:(id)a1 throttleToken:(id)a2;
- (void)encodeToXPCDictionary:(id)a0;
- (void).cxx_destruct;

@end
