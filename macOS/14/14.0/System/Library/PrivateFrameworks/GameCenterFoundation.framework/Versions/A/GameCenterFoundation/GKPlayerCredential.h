@class NSString, NSDate, GKPlayerInternal;

@interface GKPlayerCredential : GKInternalRepresentation

@property (retain) NSString *accountName;
@property (retain) NSString *authenticationToken;
@property (retain) NSString *altDSID;
@property (retain) NSString *DSID;
@property (retain) GKPlayerInternal *playerInternal;
@property long long environment;
@property unsigned int scope;
@property (readonly) NSString *scopeAsString;
@property (retain) NSDate *scopeModificationDate;

+ (id)secureCodedPropertyKeys;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
