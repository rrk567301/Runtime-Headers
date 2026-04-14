@class NSURL, NSString;

@interface GEOMapsURLShortenerRequest : GEOXPCRequest <GEOXPCRequest>

@property (retain, nonatomic) NSURL *url;
@property (nonatomic) BOOL shorten;
@property (nonatomic) double timeout;
@property (nonatomic) unsigned int options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)replyClass;

- (id)initWithTraits:(id)a0 auditToken:(id)a1 throttleToken:(id)a2;
- (unsigned long long)reply;
- (void)encodeToXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isValid;

@end
