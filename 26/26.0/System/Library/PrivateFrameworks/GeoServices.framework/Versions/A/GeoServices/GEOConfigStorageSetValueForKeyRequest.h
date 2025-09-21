@class NSString;

@interface GEOConfigStorageSetValueForKeyRequest : GEOXPCRequest <GEOXPCRequest>

@property (retain, nonatomic) NSString *keyString;
@property (nonatomic) unsigned long long keyOptions;
@property (retain, nonatomic) id keyValue;
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
