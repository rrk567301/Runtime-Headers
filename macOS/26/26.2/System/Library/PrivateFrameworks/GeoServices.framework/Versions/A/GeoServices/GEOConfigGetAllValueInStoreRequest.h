@class NSString;

@interface GEOConfigGetAllValueInStoreRequest : GEOXPCRequest <GEOXPCRequest>

@property (nonatomic) unsigned long long keyOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)replyClass;

- (id)initWithTraits:(id)a0 auditToken:(id)a1 throttleToken:(id)a2;
- (unsigned long long)reply;
- (void)encodeToXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;
- (BOOL)isValid;

@end
