@interface TKSEPClientToken : TKClientToken

+ (id)builtinTokenIDs;
+ (BOOL)handlesTokenID:(id)a0;

- (id)initWithTokenID:(id)a0 serverEndpoint:(id)a1 targetUID:(id)a2;

@end
