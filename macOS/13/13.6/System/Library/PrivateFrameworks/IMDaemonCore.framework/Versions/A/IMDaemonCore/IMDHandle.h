@class NSString, NSDictionary;

@interface IMDHandle : NSObject

@property (retain, nonatomic) NSString *ID;
@property (retain, nonatomic) NSString *unformattedID;
@property (retain, nonatomic) NSString *countryCode;
@property (readonly, retain, nonatomic) NSDictionary *handleInfo;
@property (retain, nonatomic) NSString *personCentricID;
@property (copy, nonatomic) NSString *CNContactID;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (long long)compareIDs:(id)a0;
- (BOOL)isBusiness;
- (id)initWithID:(id)a0 unformattedID:(id)a1 countryCode:(id)a2;
- (id)initWithID:(id)a0 unformattedID:(id)a1 countryCode:(id)a2 personCentricID:(id)a3;
- (BOOL)isBetterDefinedThan:(id)a0;

@end
