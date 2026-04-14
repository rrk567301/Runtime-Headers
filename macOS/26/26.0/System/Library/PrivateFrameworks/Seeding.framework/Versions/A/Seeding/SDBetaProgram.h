@class NSString, NSArray, NSURL, NSSet;

@interface SDBetaProgram : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long programID;
@property (retain) NSString *title;
@property long long program;
@property (retain) NSURL *catalog;
@property (retain) NSURL *assetUpdate;
@property (retain) NSURL *assetBrain;
@property (retain) NSString *assetAudience;
@property (retain) NSArray *legalDocs;
@property unsigned long long platform;
@property (retain) NSString *buildPrefix;
@property long long accountID;
@property (retain) NSSet *betaEnrollmentTokens;
@property (readonly) BOOL isMDMProgram;

+ (BOOL)isPad;
+ (id)betaProgramWithJSON:(id)a0;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithID:(long long)a0 title:(id)a1 program:(id)a2 catalog:(id)a3 assetUpdate:(id)a4 assetBrain:(id)a5 assetAudience:(id)a6 legalDocs:(id)a7 platform:(unsigned long long)a8 buildPrefix:(id)a9 accountID:(long long)a10 betaEnrollmentTokens:(id)a11;

@end
