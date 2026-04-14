@class NSString;

@interface MISTeamIDEntryForUI : NSObject

@property (copy, nonatomic) NSString *teamID;
@property (copy, nonatomic) NSString *teamName;
@property (nonatomic) BOOL trusted;
@property (nonatomic) BOOL hasAuxiliarySignature;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)redactedDescription;
- (id)initWithTeamID:(id)a0 teamName:(id)a1 trusted:(BOOL)a2 hasAuxiliarySignature:(BOOL)a3;

@end
