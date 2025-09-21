@class NSUUID, NSArray, NSString;

@interface GEOPlaceByPhoneNumberRequest : GEOXPCRequest <GEOXPCRequest>

@property (retain, nonatomic) NSUUID *requestUUID;
@property (retain, nonatomic) NSArray *phoneNumbers;
@property (nonatomic) char allowCellular;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)replyClass;

- (char)isValid;
- (void).cxx_destruct;
- (unsigned long long)reply;
- (void)encodeToXPCDictionary:(id)a0;
- (id)initWithTraits:(id)a0 auditToken:(id)a1 throttleToken:(id)a2;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;

@end
