@class NSString, NSDate;

@interface SPExecutionHistoryItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *execPath;
@property (readonly, nonatomic) NSString *mmapPath;
@property (readonly, nonatomic) NSString *signingID;
@property (readonly, nonatomic) NSString *teamID;
@property (readonly, nonatomic) NSString *cdHash;
@property (readonly, nonatomic) NSString *responsiblePath;
@property (readonly, nonatomic) NSString *developerName;
@property (readonly, nonatomic) NSDate *lastSeen;

+ (id)executionHistoryItemWithExecPath:(id)a0 mmapPath:(id)a1 signingID:(id)a2 teamID:(id)a3 cdHash:(id)a4 responsiblePath:(id)a5 developerName:(id)a6 lasSeen:(id)a7;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithExecPath:(id)a0 mmapPath:(id)a1 signingID:(id)a2 teamID:(id)a3 cdHash:(id)a4 responsiblePath:(id)a5 developerName:(id)a6 lasSeen:(id)a7;

@end
