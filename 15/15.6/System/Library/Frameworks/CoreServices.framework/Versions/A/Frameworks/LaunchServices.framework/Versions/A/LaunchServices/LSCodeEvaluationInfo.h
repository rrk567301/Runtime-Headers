@class NSUUID, NSDictionary, NSURL, NSString, NSDate;

@interface LSCodeEvaluationInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property long long totalUnits;
@property long long completedUnits;
@property (retain) NSDictionary *results;
@property (readonly) NSUUID *identifier;
@property (copy) NSURL *url;
@property unsigned int uid;
@property (copy) NSString *teamName;
@property (copy) NSURL *displayBundleURL;
@property (copy) NSURL *processURL;
@property (copy) NSURL *responsibleURL;
@property (copy) NSString *signingID;
@property (copy) NSString *processSigningID;
@property (copy) NSString *responsibleSigningID;
@property (copy) NSString *malwareName;
@property (copy) NSString *teamID;
@property (copy) NSString *processTeamID;
@property (copy) NSString *responsibleTeamID;
@property (getter=isNotarized) char notarized;
@property (copy) NSDate *notarizationDate;
@property (getter=isMovedToTrash) char movedToTrash;
@property (copy) NSURL *trashedURL;
@property (readonly) char isDeterminate;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)responsibleBundleURL;
- (void)setResponsibleBundleURL:(id)a0;

@end
