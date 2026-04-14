@class NSString;

@interface MISTeamIDEntryForUI : NSObject

@property (copy, nonatomic) NSString *teamID;
@property (copy, nonatomic) NSString *teamName;
@property (nonatomic) BOOL trusted;
@property (nonatomic) BOOL hasAuxiliarySignature;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)redactedDescription;
- (id)initWithTeamID:(id)a0 teamName:(id)a1 trusted:(BOOL)a2 hasAuxiliarySignature:(BOOL)a3;

@end
