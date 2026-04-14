@class NSString;

@interface MISTeamIDEntryForUI : NSObject

@property (copy, nonatomic) NSString *teamID;
@property (copy, nonatomic) NSString *teamName;
@property (nonatomic) BOOL trusted;
@property (nonatomic) BOOL hasAuxiliarySignature;

- (id)description;
- (void).cxx_destruct;
- (id)redactedDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithTeamID:(id)a0 teamName:(id)a1 trusted:(BOOL)a2 hasAuxiliarySignature:(BOOL)a3;

@end
